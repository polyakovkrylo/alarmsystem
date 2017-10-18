#include "toxicsensor.h"

ToxicSensor::ToxicSensor(GasType gas, int threshold,
                         std::string id, std::string vendor) :
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
