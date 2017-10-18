#include "alarmsensor.h"

using std::cout;
using std::endl;


AlarmSensor::AlarmSensor(std::string id, std::string type, std::string vendor) :
    AlarmComponent(id), type_{type}, vendor_{vendor}
{

}

AlarmSensor::~AlarmSensor()
{

}

void AlarmSensor::update()
{
    cout << "Sensor " << id_  << "has been updated";
}

void AlarmSensor::activate()
{
    cout << "Sensor " << id_  << " of type " << type_
         << " has been activated" << endl;
    activateStrategies();
}

void AlarmSensor::deactivate()
{
    cout << "Sensor " << id_  << " of type " << type_
         << " has been deactivated" << endl;
    deactivateStrategies();
}
