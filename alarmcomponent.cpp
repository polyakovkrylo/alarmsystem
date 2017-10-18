#include "alarmcomponent.h"


using std::cout;
using std::endl;

AlarmComponent::AlarmComponent(std::string id) :
    id_{id}
{

}

AlarmComponent::~AlarmComponent()
{

}

void AlarmComponent::activate()
{
    cout << id_ << " has been activated" << endl;
}

void AlarmComponent::deactivate()
{
    cout << id_ << " has been deactivated" << endl;
}

void AlarmComponent::printInfo()
{
    cout << id_ << endl;
}

std::string AlarmComponent::getId()
{
    return id_;
}
