/*!
 * \file alarmcomponent.cpp
 *
 * AlarmComponent class definition
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#include "alarmcomponent.h"

using std::cout;
using std::endl;
using std::string;
using std::stringstream;

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
        cout << id_  << " activated" << endl;
        // Add information about the root component
        // and notify observers
        stringstream msg;
        msg << "Facility " << getRootComponent()->getId()
            << " : " << id_  << " activated" << endl;
        notify(msg.str());
    }
}

void AlarmComponent::deactivate()
{
    if(activated_){
        activated_ = false;

        cout << id_  << " deactivated" << endl;

        // Add information about the root component
        // and notify observers
        stringstream msg;
        msg << "Facility " << getRootComponent()->getId()
            << " : " << id_  << " deactivated" << endl;
        notify(msg.str());
    }
}

void AlarmComponent::printInfo() const
{
    cout << id_ << endl;
}

const AlarmComponent::SPtr AlarmComponent::getRootComponent()
{
    SPtr sptr;
    (parent_ == nullptr) ? sptr = shared_from_this() : sptr = parent_->getRootComponent();
    return sptr;
}

void AlarmComponent::setParent(const SPtr &sptr)
{
    parent_ = sptr;
}

void AlarmComponent::notify(const std::string msg)
{
    AlarmObservable::notify(msg);
    if(parent_!=nullptr)
        parent_->notify(msg);
}

bool compare_id(const AlarmComponent::SPtr &sptr1, const AlarmComponent::SPtr &sptr2)
{
    return (sptr1->getId() < sptr2->getId());
}
