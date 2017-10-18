#include "smokesensor.h"

SmokeSensor::SmokeSensor(int threshold, std::string id, std::string vendor) :
    AbstractSensor(id, "Smoke sensor", vendor), threshold_{threshold}
{

}

SmokeSensor::~SmokeSensor()
{

}

void SmokeSensor::update()
{
    // Randomly pick the current level of the signal
    // and check if the current value is higher
    // then a threshold.
    int lev = rand() % 31;  // current level
    if(lev > threshold_) {
        activate();
    }
}

