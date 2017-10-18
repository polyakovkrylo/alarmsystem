#ifndef SMOKESENSOR_H
#define SMOKESENSOR_H

#include <cmath>
#include <iostream>
#include <string>

#include "alarmsensor.h"

class SmokeSensor : public AlarmSensor
{
public:
    SmokeSensor(int threshold = 20, std::string id = "Unkown id", std::string vendor = "Unkown vendor");
    virtual ~SmokeSensor() override;

    virtual void update() override;

private:
    int threshold_;
};

#endif // SMOKESENSOR_H
