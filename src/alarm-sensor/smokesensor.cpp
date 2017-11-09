/*!
 * \file smokesensor.cpp
 *
 * SmokeSensor class definition
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#include "smokesensor.h"

using std::endl;
using std::ostream;
using std::string;
using std::stringstream;
using std::shared_ptr;

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

const string SmokeSensor::getInfo()
{
    stringstream result;
    result << AbstractSensor::getInfo()
           << "Threshold value is " << getThreshold() << endl;
    return result.str();
}
