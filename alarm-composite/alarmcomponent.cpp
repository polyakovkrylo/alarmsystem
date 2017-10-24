#include "alarmcomponent.h"

using std::cout;
using std::endl;
using std::string;

AlarmComponent::AlarmComponent(string id) :
    id_{id}, parent_{nullptr}, activated_{false}
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

const AlarmComponent::SPtr AlarmComponent::getRootComponent()
{
    SPtr sptr;
    (parent_ == nullptr) ? sptr = shared_from_this() : sptr = parent_->getRootComponent();
    return sptr;
}

void AlarmComponent::setParent(const AlarmComponent::SPtr &sptr)
{
    parent_ = sptr;
}
