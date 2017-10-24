#include "alarm-composite/alarmcomponentgroup.h"
#include "alarm-sensor/smokesensor.h"
#include "alarm-sensor/toxicsensor.h"
#include "alarm-sensor/motionsensor.h"
#include "alarm-strategy/callfiremen.h"
#include "alarm-strategy/callpolice.h"

using std::cout;
using std::endl;
using std::make_shared;

int main()
{
    // Testing funtion.
    // Create one room with 3 sensors
    // of different types, then apply
    // strategies to them and update
    // sensors' data few times.
    auto building = make_shared<AlarmComponentGroup>("Building 1");

    auto room = make_shared<AlarmComponentGroup>("Room 1");

    auto smoke = make_shared<SmokeSensor>(10, "SM1", "Vendor1");
    auto toxic = make_shared<ToxicSensor>(ToxicSensor::Chlorine, 10, "TOX1", "Vendor1");
    auto motion = make_shared<MotionSensor>(10, 15, "MOT1", "Vendor2");

    auto police = make_shared<CallPolice>();
    auto fire = make_shared<CallFiremen>();

    building->add(room);

    room->add(smoke);
    room->add(toxic);
    room->add(motion);

    smoke->addStrategy(fire);

    toxic->addStrategy(fire);
    toxic->addStrategy(police);

    motion->addStrategy(police);

    cout << "Testing parentness ..." << endl;
    cout << "Root component of " << smoke->getId()
         << " is " << smoke->getRootComponent()->getId() << endl;
    cout<<endl;

    cout << "Testing multiple activation of sensors"
         << " and a strategies..." << endl;
    smoke->activate();
    smoke->activate();
    toxic->activate();
    smoke->deactivate();
    toxic->deactivate();
    cout<<endl;

    cout << "Testing update function..." << endl;
    for(int i = 0; i < 5; i++) {
        smoke->update();
        toxic->update();
        motion->update();
    }
    smoke->deactivate();
    toxic->deactivate();
    motion->deactivate();
    cout<<endl;

    cout << "Testing operator-- and operator++ ..." << endl;
    ++smoke;
    --smoke;
    cout<<endl;

    cout << "Testing operator<< ..." << endl;
    cout << smoke;
    cout<<endl;
    cout << motion;
    cout<<endl;
    cout << toxic;
    return 0;
}
