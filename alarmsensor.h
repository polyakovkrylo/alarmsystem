#ifndef ALARMSENSOR_H
#define ALARMSENSOR_H

#include <iostream>
#include <string>

#include "alarmcomponent.h"
#include "alarmstrategyowner.h"

class AlarmSensor : public AlarmComponent, public AlarmStrategyOwner
{
public:
    explicit AlarmSensor(std::string id = "Unknown id", std::string type = "Unknown type", std::string vendor = "Unknown vendor");
    virtual ~AlarmSensor() override;

    virtual void update();

    virtual void activate();
    virtual void deactivate();

    std::string getVendor();
    std::string getType();

private:
    const std::string type_;
    std::string vendor_;
};

#endif // ALARMSENSOR_H
