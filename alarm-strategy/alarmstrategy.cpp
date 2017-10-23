#include "alarmstrategy.h"

using std::cout;
using std::endl;
using std::string;

AlarmStrategy::AlarmStrategy(string name) :
    name_{name}
{

}

AlarmStrategy::~AlarmStrategy()
{

}

void AlarmStrategy::activate()
{
    cout << name_ << " has been activated" << endl;
}

void AlarmStrategy::deactivate()
{
    cout << name_ << " has been deactivated" << endl;
}

