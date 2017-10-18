#ifndef ALARMSTRATEGY_H
#define ALARMSTRATEGY_H

#include <iostream>
#include <string>


class AlarmStrategy
{
public:
    explicit AlarmStrategy(std::string name_ = "unknown strategy");
    virtual ~AlarmStrategy();

    virtual void activate();
    virtual void deactivate();

private:
    std::string name_;
};

#endif // ALARMSTRATEGY_H
