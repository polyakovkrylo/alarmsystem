#ifndef TOXICSENSOR_H
#define TOXICSENSOR_H

#include <cmath>
#include <iostream>
#include <string>

#include "alarmsensor.h"

class ToxicSensor : public AlarmSensor
{
public:
    enum GasType {
        Chlorine,
        Bromine
    };

    ToxicSensor(GasType gas = Chlorine,
                int threshold = 20,
                std::string id = "Unkown id",
                std::string vendor = "Unkown vendor");

    virtual ~ToxicSensor() override;

    virtual void update() override;

private:
    GasType gasType_;
    int threshold_;
};


#endif // TOXICSENSOR_H
