/*!
 * \file abstractsensor.cpp
 *
 * AbstractSensor class definition
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#include "abstractsensor.h"

using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::ostream;
using std::shared_ptr;

AbstractSensor::AbstractSensor(string id, string type, string vendor) :
    AlarmComponent(id), type_{type}, vendor_{vendor}
{

}

AbstractSensor::~AbstractSensor()
{

}

void AbstractSensor::printInfo()
{
    cout << getInfo() << endl;
}

void AbstractSensor::activate()
{
    // print sensor's info and activate strategies
    // TODO: Redundancy of same if{} inside AlarmComponent
    if(!activated_){
        AlarmComponent::activate();
        activateStrategies();
    }
}

void AbstractSensor::deactivate()
{
    // TODO: Redundancy of same if{} inside AlarmComponent
    if(activated_){
        AlarmComponent::deactivate();
        deactivateStrategies();
    }
}

const string AbstractSensor::getInfo()
{
    stringstream result;
    result << getId()
           << " of type " << getType() << endl
           << "Located in " << getRootComponent()->getId() << endl
           << "Manufactured by " << getVendor() << endl;
    return result.str();
}

ostream & operator<<(ostream & lhs, const shared_ptr<AbstractSensor> & rhs)
{
    lhs<<rhs->getInfo();
    return lhs;
}

bool compare_vendor(const AlarmComponent::SPtr &sptr1,
                    const AlarmComponent::SPtr &sptr2)
{
    return (std::dynamic_pointer_cast<AbstractSensor>(sptr1)->getVendor()
            < std::dynamic_pointer_cast<AbstractSensor>(sptr2)->getVendor());
}

bool compare_type(const AlarmComponent::SPtr &sptr1,
                    const AlarmComponent::SPtr &sptr2)
{
    return (std::dynamic_pointer_cast<AbstractSensor>(sptr1)->getType()
            < std::dynamic_pointer_cast<AbstractSensor>(sptr2)->getType());
}

bool compare_vendor_id(const AlarmComponent::SPtr &sptr1,
                       const AlarmComponent::SPtr &sptr2)
{
    std::shared_ptr<AbstractSensor> s1 =
            std::dynamic_pointer_cast<AbstractSensor>(sptr1);
    std::shared_ptr<AbstractSensor> s2 =
            std::dynamic_pointer_cast<AbstractSensor>(sptr2);
    if(s1->getVendor() != s2->getVendor())
        return s1->getVendor() < s2->getVendor();
    else
        return (s1->getId() < s2->getId());
}
