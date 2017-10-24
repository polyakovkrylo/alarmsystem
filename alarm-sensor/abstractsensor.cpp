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

const string AbstractSensor::getInfo() const
{
    stringstream result;
    result << getId()
           << " of type " << getType() << endl
           << "Manufactured by " << getVendor() << endl;
    return result.str();
}

ostream & operator<<(ostream & lhs, const shared_ptr<AbstractSensor> & rhs)
{
    lhs<<rhs->getInfo();
    return lhs;
}
