/*!
 * \file alarmstrategy.cpp
 *
 * AlarmStrategy class definition
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#include "alarmstrategy.h"

using std::cout;
using std::endl;
using std::string;

AlarmStrategy::AlarmStrategy(string name) :
    name_{name}, activatedCount_{0}
{

}

AlarmStrategy::~AlarmStrategy()
{

}

void AlarmStrategy::activate()
{
    // Whenever strategy is being activated we increment
    // the couter of calls
    if(!activatedCount_){
        cout << name_ << " has been activated" << endl;
    }
    ++activatedCount_;
}

void AlarmStrategy::deactivate()
{
    // We only deactivate the strategy if none of sensors has
    // activated it at the moment
    --activatedCount_;
    if(!activatedCount_){
        cout << name_ << " has been deactivated" << endl;
    }
}

const int & AlarmStrategy::activated()
{
    return activatedCount_;
}

