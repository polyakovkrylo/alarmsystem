#include "alarmcomponentgroup.h"
#include "alarmsensor.h"

using namespace std;

int main()
{
    AlarmComponentGroup room("Room 1");

    auto sensor1 = std::make_shared<AlarmSensor>("Smoke sensor", "s1");
    auto sensor2 = std::make_shared<AlarmSensor>("Smoke sensor", "s2");

    auto strat1 = std::make_shared<AlarmStrategy>("Strategy 1");
    auto strat2 = std::make_shared<AlarmStrategy>("Strategy 2");
    auto strat3 = std::make_shared<AlarmStrategy>("Strategy 3");

    room.add(sensor1);
    room.add(sensor2);

    sensor1->addStrategy(strat1);
    sensor1->addStrategy(strat2);

    sensor2->addStrategy(strat1);

    room.activate();

    sensor1->removeStrategy(strat1);
    sensor1->addStrategy(strat3);

    room.deactivate();


    return 0;
}
