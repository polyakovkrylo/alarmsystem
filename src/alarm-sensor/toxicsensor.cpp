/*!
 * \file toxicsensor.cpp
 *
 * ToxicSensor class definition
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#include "toxicsensor.h"

using std::string;
using std::stringstream;
using std::ostream;
using std::shared_ptr;
using std::endl;

ToxicSensor::ToxicSensor(string id, string vendor,
                         int threshold, GasType gas) :
    AbstractSensor(id, "Toxic sensor", vendor),
    gasType_{gas}, threshold_{threshold}
{

}

ToxicSensor::~ToxicSensor()
{

}

void ToxicSensor::update()
{
    // Randomly pick the current level of the signal
    // and check if the current value is higher
    // then a threshold.
    int lev = rand() % 31;  // current level
    if(lev > threshold_) {
        activate();
    }
}

const string ToxicSensor::getGasType() const
{
    string result;
    switch (gasType_) {
    case Chlorine:
        result = "Chlorine";
        break;
    case Bromine:
        result = "Bromine";
        break;
    default:
        result = "Unknown";
        break;
    }
    return result;
}

const string ToxicSensor::getInfo()
{
    stringstream result;
    result << AbstractSensor::getInfo()
           << "Detects " << getGasType() << endl
           << "Threshold value is " << getThreshold() << endl;
    return result.str();
}
