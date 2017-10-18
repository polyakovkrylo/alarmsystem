#include "toxicsensor.h"

ToxicSensor::ToxicSensor(GasType gas, int threshold,
                         std::string id, std::string vendor) :
    AlarmSensor(id, "Toxic sensor", vendor),
    gasType_{gas}, threshold_{threshold}
{

}

ToxicSensor::~ToxicSensor()
{

}

void ToxicSensor::update()
{
    int lev = rand() % 31;  // current level
    if(lev > threshold_) {
        activate();
    }
}
