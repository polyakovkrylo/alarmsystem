#include "motionsensor.h"

MotionSensor::MotionSensor(int minDistance, int maxDistance,
                           std::string id, std::string vendor) :
    AlarmSensor(id, "Motion sensor", vendor),
    minDistance_{minDistance}, maxDistance_{maxDistance}
{

}

MotionSensor::~MotionSensor()
{

}

void MotionSensor::update()
{
    int lev = rand() % 41;  // current level
    if((lev > minDistance_) && (lev < maxDistance_)) {
        activate();
    }
}
