#include "toxicsensor.h"

using std::string;
using std::stringstream;
using std::ostream;
using std::shared_ptr;
using std::endl;

ToxicSensor::ToxicSensor(GasType gas, int threshold,
                         string id, string vendor) :
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

const string ToxicSensor::getInfo() const
{
    stringstream result;
    result << AbstractSensor::getInfo()
           << "Detects " << getGasType() << endl
           << "Threshold value is " << getThreshold() << endl;
    return result.str();
}
