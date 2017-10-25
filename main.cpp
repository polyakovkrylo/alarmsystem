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
    // one room with 3 sensors
    // of different types.
    auto building = make_shared<AlarmComponentGroup>("Building 1");

    auto room = make_shared<AlarmComponentGroup>("Room 1");
    auto room2 = make_shared<AlarmComponentGroup>("Room 2");

    auto smoke = make_shared<SmokeSensor>(10, "SM1", "Vendor1");
    auto toxic = make_shared<ToxicSensor>(ToxicSensor::Chlorine, 10, "TOX1", "Vendor1");
    auto motion = make_shared<MotionSensor>(10, 15, "MOT1", "Vendor2");

    building->add(room);
    building->add(room2);
    building->add(smoke);
    room->add(toxic);
    room2->add(motion);

    // Firt test parentness
    cout << "Testing parentness ..." << endl;
    cout << "Root component of " << smoke->getId()
         << " is " << smoke->getRootComponent()->getId() << endl;
    cout<<endl;

    // Now test observers and strategies
    auto signal = make_shared<AlarmSignal>();
    auto water = make_shared<WaterDispenser>();

    smoke->addStrategy(water);
    smoke->addStrategy(signal);
    toxic->addStrategy(water);
    motion->addStrategy(signal);

    auto police = make_shared<AlarmObserver>("Police");
    auto fire = make_shared<AlarmObserver>("Firemen");

    room->addObserver(police);
    smoke->addObserver(fire);

//    cout << "Testing observers and strategies..." << endl;
//    smoke->activate();
//    toxic->activate();
//    motion->activate();

//    // We try activate to activate it twice,
//    // but sensors should be only activated once
//    smoke->activate();
//    toxic->activate();
//    motion->activate();

//    smoke->deactivate();
//    toxic->deactivate();
//    motion->deactivate();
//    cout<<endl;


//    // Now test update()
//    cout << "Testing update function..." << endl;
//    for(int i = 0; i < 5; i++) {
//        smoke->update();
//        toxic->update();
//        motion->update();
//    }
//    smoke->deactivate();
//    toxic->deactivate();
//    motion->deactivate();
//    cout<<endl;

//    // Finally, test overloaded operators
//    cout << "Testing operator-- and operator++ ..." << endl;
//    ++smoke;
//    --smoke;
//    cout<<endl;

//    cout << "Testing operator<< ..." << endl;
//    cout << smoke;
//    cout<<endl;
//    cout << motion;
//    cout<<endl;
//    cout << toxic;

    cout << "Testing getSensors() ..." << endl;
    list<AlarmComponent::SPtr> sortedlist = building->getSensors();
    sortedlist.sort(compare_type);
    for(AlarmComponent::SPtr comp : sortedlist){
        comp->printInfo();
    }

    return 0;
}
