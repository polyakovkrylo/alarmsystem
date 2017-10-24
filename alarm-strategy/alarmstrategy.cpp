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
    if(!activatedCount_){
        cout << name_ << " has been activated" << endl;
    }
    ++activatedCount_;
}

void AlarmStrategy::deactivate()
{
    --activatedCount_;
    if(!activatedCount_){
        cout << name_ << " has been deactivated" << endl;
    }
}

