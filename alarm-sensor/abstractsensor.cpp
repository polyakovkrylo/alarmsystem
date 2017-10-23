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
    cout << getId()
         << " has been activated" << endl;
    activateStrategies();
}

void AbstractSensor::deactivate()
{
    // print sensor's info and deactivate strategies
    cout << getId()
         << " has been deactivated" << endl;
    deactivateStrategies();
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
