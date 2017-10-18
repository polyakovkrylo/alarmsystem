#include "smokesensor.h"

SmokeSensor::SmokeSensor(int threshold, std::string id, std::string vendor) :
    AlarmSensor(id, "Smoke sensor", vendor), threshold_{threshold}
{

}

SmokeSensor::~SmokeSensor()
{

}

void SmokeSensor::update()
{
    int currentLevel = rand() % 31;
    if(currentLevel > threshold_) {
        activate();
    }
}

