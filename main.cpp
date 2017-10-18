#include "alarmcomponentgroup.h"
#include "smokesensor.h"
#include "toxicsensor.h"
#include "motionsensor.h"
#include "callfiremen.h"
#include "callpolice.h"

using namespace std;

int main()
{
    // Testing funtion.
    // Create one room with 3 sensors
    // of different types, then apply
    // strategies to them and update
    // sensors' data few times.
    AlarmComponentGroup room("Room 1");

    auto smoke = std::make_shared<SmokeSensor>();
    auto toxic = std::make_shared<ToxicSensor>();
    auto motion = std::make_shared<MotionSensor>();

    auto police = std::make_shared<CallPolice>();
    auto fire = std::make_shared<CallFiremen>();

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


    return 0;
}
