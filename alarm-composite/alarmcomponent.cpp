#include "alarmcomponent.h"

using std::cout;
using std::endl;
using std::string;

AlarmComponent::AlarmComponent(string id) :
    id_{id}, activated_{false}
{

}

AlarmComponent::~AlarmComponent()
{

}

void AlarmComponent::activate()
{
    if(!activated_) {
        activated_ = true;
        cout << id_ << " has been activated" << endl;
    }
}

void AlarmComponent::deactivate()
{
    if(activated_){
        activated_ = false;
        cout << id_ << " has been deactivated" << endl;
    }
}

void AlarmComponent::printInfo()
{
    cout << id_ << endl;
}
