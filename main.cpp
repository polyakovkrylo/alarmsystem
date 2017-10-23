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
    AlarmComponentGroup room("Room 1");

    auto smoke = make_shared<SmokeSensor>(10, "SM1", "Vendor1");
    auto toxic = make_shared<ToxicSensor>(ToxicSensor::Chlorine, 10, "TOX1", "Vendor1");
    auto motion = make_shared<MotionSensor>(10, 15, "MOT1", "Vendor2");

    auto police = make_shared<CallPolice>();
    auto fire = make_shared<CallFiremen>();

    room.add(smoke);
    room.add(toxic);
    room.add(motion);

    smoke->addStrategy(fire);

    toxic->addStrategy(fire);
    toxic->addStrategy(police);

    motion->addStrategy(police);

    for(int i = 0; i < 5; i++) {
        smoke->update();
        toxic->update();
        motion->update();
    }

    // Testing overloaded operators
    cout << "Testing increment and decrement:" << endl;
    ++smoke;
    --smoke;

    cout << "Testing operator<< : " << endl;
    cout << smoke;
    cout << motion;
    cout << toxic;
    return 0;
}
