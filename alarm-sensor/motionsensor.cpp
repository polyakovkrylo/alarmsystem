#include "motionsensor.h"

MotionSensor::MotionSensor(int minDistance, int maxDistance,
                           std::string id, std::string vendor) :
    AbstractSensor(id, "Motion sensor", vendor),
    minDistance_{minDistance}, maxDistance_{maxDistance}
{

}

MotionSensor::~MotionSensor()
{

}

void MotionSensor::update()
{
    // Randomly pick current level of the signal
    // and check if the current value is within
    // an active range.
    int lev = rand() % 41;  // current level
    if((lev > minDistance_) && (lev < maxDistance_)) {
        activate();
    }
}
