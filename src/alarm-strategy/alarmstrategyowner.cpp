/*!
 * \file alarmstrategyowner.cpp
 *
 * AlarmStrategyOwner class definition
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

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
