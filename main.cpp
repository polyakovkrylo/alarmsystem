#include "alarmcomponentgroup.h"
#include "alarmstrategyowner.h"

using namespace std;

int main()
{
    AlarmStrategyOwner owner;

    auto strat1 = std::make_shared<AlarmStrategy>("Strategy 1");
    auto strat2 = std::make_shared<AlarmStrategy>("Strategy 2");

    owner.addStrategy(strat1);
    owner.addStrategy(strat2);

    owner.activateStrategies();

    auto strat3 = std::make_shared<AlarmStrategy>("Strategy 3");


    owner.removeStrategy(strat1);
    owner.addStrategy(strat3);

    owner.deactivateStrategies();

    return 0;
}
