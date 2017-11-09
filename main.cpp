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

int main()
{
    // Testing funtion.
    // Includes one building with
    // two room with a bunch of sensors
    // of different types.
    auto building = make_shared<AlarmComponentGroup>("Building 1");

    auto room1 = make_shared<AlarmComponentGroup>("Room 1");
    auto room2 = make_shared<AlarmComponentGroup>("Room 2");
    auto room3 = make_shared<AlarmComponentGroup>("Room 3");

    auto smoke1 = make_shared<SmokeSensor>(10, "SM1", "Vendor1");
    auto smoke2 = make_shared<SmokeSensor>(15, "SM2", "Vendor 3");
    auto smoke3 = make_shared<SmokeSensor>(12, "SM3", "Vendor 2");
    auto smoke4 = make_shared<SmokeSensor>(15, "SM4", "Vendor 2");
    auto toxic1 = make_shared<ToxicSensor>(ToxicSensor::Chlorine, 15, "TOX1", "Vendor1");
    auto toxic2 = make_shared<ToxicSensor>(ToxicSensor::Bromine, 8, "TOX2", "Vendor3");
    auto toxic3 = make_shared<ToxicSensor>(ToxicSensor::Bromine, 17, "TOX3", "Vendor3");
    auto toxic4 = make_shared<ToxicSensor>(ToxicSensor::Chlorine, 7, "TOX4", "Vendor1");
    auto motion1 = make_shared<MotionSensor>(8, 15, "MOT1", "Vendor2");
    auto motion2 = make_shared<MotionSensor>(7, 25, "MOT2", "Vendor1");
    auto motion3 = make_shared<MotionSensor>(17, 18, "MOT3", "Vendor2");
    auto motion4 = make_shared<MotionSensor>(8, 15, "MOT4", "Vendor4");


    building->add(room1);
    building->add(room2);
    building->add(smoke1);
    room1->add(toxic1);
    room1->add(toxic4);
    room1->add(motion3);
    room2->add(motion1);
    room2->add(toxic2);
    room2->add(motion2);
    room3->add(smoke2);
    room3->add(toxic3);
    room3->add(smoke3);
    room3->add(smoke4);
    room3->add(motion4);


    // Firt test parentness
    cout << "Testing parentness ..." << endl;
    cout << "Root component of " << smoke1->getId()
         << " is " << smoke1->getRootComponent()->getId() << endl;
    cout<<endl;

    // Now test observers and strategies
    auto signal = make_shared<AlarmSignal>();
    auto water = make_shared<WaterDispenser>();

    smoke1->addStrategy(water);
    smoke1->addStrategy(signal);
    toxic1->addStrategy(water);
    motion1->addStrategy(signal);

    auto police = make_shared<AlarmObserver>("Police");
    auto fire = make_shared<AlarmObserver>("Firemen");

    room1->addObserver(police);
    smoke1->addObserver(fire);

    cout << "Testing observers and strategies..." << endl;
    smoke1->activate();
    toxic1->activate();
    motion1->activate();

    // We try activate to activate it twice,
    // but sensors should be only activated once
    smoke1->activate();
    toxic1->activate();
    motion1->activate();

    smoke1->deactivate();
    toxic1->deactivate();
    motion1->deactivate();
    cout<<endl;


    // Now test update()
    cout << "Testing update function..." << endl;
    for(int i = 0; i < 5; i++) {
        smoke1->update();
        toxic1->update();
        motion1->update();
    }
    smoke1->deactivate();
    toxic1->deactivate();
    motion1->deactivate();
    cout<<endl;

    // Test overloaded operators
    cout << "Testing operator-- and operator++ ..." << endl;
    ++smoke1;
    --smoke1;
    cout<<endl;

    cout << "Testing operator<< ..." << endl;
    cout << smoke1;
    cout<<endl;
    cout << motion1;
    cout<<endl;
    cout << toxic1;

    cout << "Testing getLeafComponents() ..." << endl;

    list<AlarmComponent::SPtr> sortedlist = building->getLeafComponents();
    sortedlist.sort(compareByVendorByType());
//  Other option is to use lambda
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

    for(AlarmComponent::SPtr comp : sortedlist){
        comp->printInfo();
    }

    return 0;
}
