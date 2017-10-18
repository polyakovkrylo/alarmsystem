#include "alarmstrategyowner.h"

AlarmStrategyOwner::AlarmStrategyOwner()
{

}

AlarmStrategyOwner::~AlarmStrategyOwner()
{

}

void AlarmStrategyOwner::activateStrategies()
{
    // actiavte each strategy in strategy list
    for(SPtr &strategy : strategies_) {
        strategy->activate();
    }
}

void AlarmStrategyOwner::deactivateStrategies()
{
    // deactiavte each strategy in strategy list
    for(SPtr &strategy : strategies_) {
        strategy->deactivate();
    }
}

void AlarmStrategyOwner::addStrategy(const AlarmStrategyOwner::SPtr &strategy)
{
    strategies_.push_back(strategy);
}

void AlarmStrategyOwner::removeStrategy(const AlarmStrategyOwner::SPtr &strategy)
{
    strategies_.remove(strategy);
}
