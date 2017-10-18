#include "abstractsensor.h"

using std::cout;
using std::endl;


AbstractSensor::AbstractSensor(std::string id, std::string type, std::string vendor) :
    AlarmComponent(id), type_{type}, vendor_{vendor}
{

}

AbstractSensor::~AbstractSensor()
{

}

void AbstractSensor::activate()
{
    // print sensor's info and activate strategies
    cout << "Sensor " << id_  << " of type " << type_
         << " has been activated" << endl;
    activateStrategies();
}

void AbstractSensor::deactivate()
{
    // print sensor's info and deactivate strategies
    cout << "Sensor " << id_  << " of type " << type_
         << " has been deactivated" << endl;
    deactivateStrategies();
}
