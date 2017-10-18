#include "alarmcomponentgroup.h"
#include "smokesensor.h"
#include "callfiremen.h"
#include "callpolice.h"

using namespace std;

int main()
{
    AlarmComponentGroup room("Room 1");

    auto sensor1 = std::make_shared<SmokeSensor>();

    auto strat1 = std::make_shared<CallPolice>();

    room.add(sensor1);

    sensor1->addStrategy(strat1);

    for(int i = 0; i < 20; i++) {
        sensor1->update();
    }


    return 0;
}
