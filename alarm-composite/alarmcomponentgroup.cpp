#include "alarmcomponentgroup.h"

using std::cout;
using std::string;

AlarmComponentGroup::AlarmComponentGroup(string id) :
    AlarmComponent(id)
{

}

AlarmComponentGroup::~AlarmComponentGroup()
{

}

void AlarmComponentGroup::activate()
{
    // print out that *this instance has been
    // activated and activate each child.
    AlarmComponent::activate();
    for(SPtr& child : children_) {
        child->activate();
    }
}

void AlarmComponentGroup::deactivate()
{
    // print out that *this instance has been
    // deactivated and activate each child.
    AlarmComponent::deactivate();
    for(SPtr &child : children_) {
        child->deactivate();
    }
}

void AlarmComponentGroup::printInfo()
{
    // print info about *this instance has been
    // activated and activate each child.
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


