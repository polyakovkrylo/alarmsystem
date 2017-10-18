#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H


#include <cmath>
#include <iostream>
#include <string>

#include "alarmsensor.h"

class MotionSensor : public AlarmSensor
{
public:
    MotionSensor(int minDistance = 0,
                 int maxDistance = 20,
                 std::string id = "Unkown id",
                 std::string vendor = "Unkown vendor");

    virtual ~MotionSensor() override;

    virtual void update() override;

private:
    int minDistance_;
    int maxDistance_;
};


#endif // MOTIONSENSOR_H
