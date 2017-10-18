#include "alarmstrategy.h"

using std::cout;
using std::endl;

AlarmStrategy::AlarmStrategy(std::string name) :
    name{name}
{

}

AlarmStrategy::~AlarmStrategy()
{

}

void AlarmStrategy::activate()
{
    cout << name << " was activated" << endl;
}

void AlarmStrategy::deactivate()
{
    cout << name << " was deactivated" << endl;
}

