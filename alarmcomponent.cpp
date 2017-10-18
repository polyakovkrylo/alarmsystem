#include "alarmcomponent.h"


using std::cout;
using std::endl;

AlarmComponent::AlarmComponent(std::string id) :
    id{id}
{

}

AlarmComponent::~AlarmComponent()
{

}

void AlarmComponent::activate()
{
    cout << id << "was activated" << endl;
}

void AlarmComponent::deactivate()
{
    cout << id << "was deactivated" << endl;
}

void AlarmComponent::printInfo()
{
    cout << id << endl;
}

std::string AlarmComponent::getId()
{
    return id;
}
