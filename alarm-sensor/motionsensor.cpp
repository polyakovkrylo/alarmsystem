/*!
 * \file motionsensor.cpp
 *
 * MotionSensor class definition
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#include "motionsensor.h"

using std::string;
using std::stringstream;
using std::ostream;
using std::endl;
using std::shared_ptr;

MotionSensor::MotionSensor(int minDistance, int maxDistance,
                           string id, string vendor) :
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

string const MotionSensor::getInfo()
{
    stringstream result;
    result << AbstractSensor::getInfo()
           << "Minimal distance is " << getMinDistance() << " meters" << endl
           << "Maximal distance is " << getMaxDistance() << " meters" << endl;
    return result.str();
}
