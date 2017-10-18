#include "alarmcomponent.h"
#include "alarmcomponentgroup.h"

using namespace std;

int main()
{
    AlarmComponentGroup room("Room 1");

    auto comp1 = std::make_shared<AlarmComponent>("Leaf 1");
    auto comp2 = std::make_shared<AlarmComponent>("Leaf 2");

    room.add(comp1);
    room.add(comp2);

    room.printInfo();

    return 0;
}
