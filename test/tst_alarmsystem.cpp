#include <QString>
#include <QtTest>

#include "alarm-composite/alarmcomponentgroup.h"
#include "alarm-sensor/smokesensor.h"
#include "alarm-sensor/toxicsensor.h"
#include "alarm-sensor/motionsensor.h"
#include "alarm-strategy/waterdispenser.h"
#include "alarm-strategy/alarmsignal.h"
#include "alarm-observer/alarmobserver.h"

using std::cout;
using std::endl;
using std::make_shared;
using std::list;
using std::shared_ptr;
using std::string;
using std::stringstream;

class TestObserver : public AlarmObserver
{
public:
    TestObserver(const string &name) : AlarmObserver(name), notified_{0} {}
    virtual void handle(const string &msg) override { Q_UNUSED(msg); notified_++; }
    const int & notified() { return notified_; }
private:
    int notified_;
};

class AlarmSystem : public QObject
{
    Q_OBJECT

public:
    AlarmSystem();

private Q_SLOTS:
    void testCaseRootComponent();
    void testCaseStrategy();
    void testCaseObserver();
    void testCaseOperators();
    void testCaseSorting();
};

AlarmSystem::AlarmSystem()
{
}

void AlarmSystem::testCaseRootComponent()
{
    // Testing root component getter
    auto b = make_shared<AlarmComponentGroup>("Building");
    auto r = make_shared<AlarmComponentGroup>("Room");
    auto s = make_shared<SmokeSensor>();
    r->add(s);
    b->add(r);
    QCOMPARE(s->getRootComponent()->getId(), b->getId());
}

void AlarmSystem::testCaseStrategy()
{
    // Testing multiple activation of strategies
    auto bld = make_shared<AlarmComponentGroup>("Building");
    auto rm1 = make_shared<AlarmComponentGroup>("Room 1");
    auto rm2 = make_shared<AlarmComponentGroup>("Room 2");
    auto ss1 = make_shared<SmokeSensor>("SM1");
    auto ss2 = make_shared<SmokeSensor>("SM2");
    auto ts = make_shared<ToxicSensor>("TX1");

    rm1->add(ss1);
    rm1->add(ss2);
    rm2->add(ts);
    bld->add(rm1);
    bld->add(rm2);

    auto as = make_shared<AlarmSignal>();
    auto wd = make_shared<WaterDispenser>();

    ss1->addStrategy(wd);
    ss2->addStrategy(as);
    rm2->addStrategy(as);
    ts->addStrategy(wd);

    ss1->activate();
    ss2->activate();
    ts->activate();
    rm2->activate();

    // Each strategy should only be triggered once,
    // but track the number of times it's been activated
    QCOMPARE(wd->activated(), 2);
    QCOMPARE(as->activated(), 2);

    ss1->deactivate();
    ss2->deactivate();

    QCOMPARE(wd->activated(), 1);
    QCOMPARE(as->activated(), 1);

    // Nothing should happen when we deactivate component repetitively
    ss1->deactivate();
    ss2->deactivate();

    QCOMPARE(wd->activated(), 1);
    QCOMPARE(as->activated(), 1);

    ts->deactivate();
    rm2->deactivate();

    QCOMPARE(wd->activated(), 0);
    QCOMPARE(as->activated(), 0);
}

void AlarmSystem::testCaseObserver()
{
    // Testing observer nested notification
    // Add one observer to each level, activate the lowest level.
    // Number of times observer should be notified is
    // equal to the number of elements observer is attached to
    // within the activated branch.
    auto b = make_shared<AlarmComponentGroup>("building");
    auto r = make_shared<AlarmComponentGroup>("room");
    auto s = make_shared<SmokeSensor>();
    auto o = make_shared<TestObserver>("Observer");

    b->add(r);
    r->add(s);
    b->addObserver(o);
    r->addObserver(o);
    s->addObserver(o);

    s->activate();

    QCOMPARE(o->notified(), 3);
}

void AlarmSystem::testCaseOperators()
{
    // Testing activation/deactivation by ++/--
    auto s = make_shared<SmokeSensor>("S1","V1");
    auto o = make_shared<TestObserver>("Observer");
    s->addObserver(o);
    ++s;
    --s;
    // Observer should notified twice: for activation and deactivation
    QCOMPARE(o->notified(), 2);

    // Testing << operator
    stringstream str1, str2;
    str1 << s;
    str2 << "S1 of type Smoke sensor" << endl
         << "Located in " << s->getRootComponent()->getId() << endl
         << "Manufactured by " << s->getVendor() << endl
         << "Threshold value is " << s->getThreshold() << endl;
    QCOMPARE(str1.str(), str2.str());
}

void AlarmSystem::testCaseSorting()
{
    // Testing sorting algoritm
    auto bld = make_shared<AlarmComponentGroup>("Building");
    auto rm1 = make_shared<AlarmComponentGroup>("Room 1");
    auto rm2 = make_shared<AlarmComponentGroup>("Room 2");
    auto ss1 = make_shared<SmokeSensor>("SM1","V2");
    auto ss2 = make_shared<SmokeSensor>("SM2","V1");
    auto ts = make_shared<ToxicSensor>("TX1","V1");

    rm1->add(ss1);
    bld->add(ss2);
    rm2->add(ts);
    bld->add(rm1);
    bld->add(rm2);

    // Ethalon list
    list<AlarmComponent::SPtr> l;
    l.push_back(ss2);
    l.push_back(ts);
    l.push_back(ss1);

    // Sort list by vendor by type
    list<AlarmComponent::SPtr> sl = bld->getLeafComponents();
    sl.sort(compareByVendorByType());
    //  Another option is to use lambda
    //    sortedlist.sort(
    //                [] (auto lhs, auto rhs) -> bool
    //    {
    //        std::shared_ptr<AbstractSensor> s1 =
    //                std::dynamic_pointer_cast<AbstractSensor>(lhs);
    //        std::shared_ptr<AbstractSensor> s2 =
    //                std::dynamic_pointer_cast<AbstractSensor>(rhs);
    //        if(s1->getVendor() != s2->getVendor())
    //            return s1->getVendor() < s2->getVendor();
    //        else
    //            return (s1->getId() < s2->getId());
    //    });

    // Compare element-wise ethalon and sorted list
    while(!l.empty() || !sl.empty()){
        QCOMPARE(l.front()->getId(), sl.front()->getId());
        l.pop_front();sl.pop_front();
    }
}

QTEST_APPLESS_MAIN(AlarmSystem)

#include "tst_alarmsystem.moc"
