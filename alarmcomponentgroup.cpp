#include "alarmcomponentgroup.h"

using std::cout;

AlarmComponentGroup::AlarmComponentGroup(std::string id) :
    AlarmComponent(id)
{

}

AlarmComponentGroup::~AlarmComponentGroup()
{

}

void AlarmComponentGroup::activate()
{
    AlarmComponent::activate();
    for(SPtr& child : children_) {
        child->activate();
    }
}

void AlarmComponentGroup::deactivate()
{
    AlarmComponent::deactivate();
    for(SPtr &child : children_) {
        child->deactivate();
    }
}

void AlarmComponentGroup::printInfo()
{
    AlarmComponent::printInfo();
    for(SPtr &child : children_) {
        child->printInfo();
    }
}

void AlarmComponentGroup::add(const SPtr &sptr)
{
    children_.push_back(sptr);
}

void AlarmComponentGroup::remove(const SPtr &sptr)
{
    children_.remove(sptr);
}


