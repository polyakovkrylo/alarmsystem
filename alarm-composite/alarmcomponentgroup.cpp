/*!
 * \file alarmcomponentgroup.cpp
 *
 * AlarmComponentGroup class definition
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */


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

void AlarmComponentGroup::printInfo() const
{
    // print info about *this instance has been
    // activated and activate each child.
    AlarmComponent::printInfo();
    for(const SPtr &child : children_) {
        child->printInfo();
    }
}

void AlarmComponentGroup::add(const AlarmComponent::SPtr &sptr)
{
    sptr->setParent(shared_from_this());
    children_.push_back(sptr);
}

void AlarmComponentGroup::remove(const AlarmComponent::SPtr &sptr)
{
    sptr->setParent(nullptr);
    children_.remove(sptr);
}


