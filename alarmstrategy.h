#ifndef ALARMSTRATEGY_H
#define ALARMSTRATEGY_H

#include <iostream>
#include <string>


class AlarmStrategy
{
public:
    explicit AlarmStrategy(std::string name = "unknown strategy");
    virtual ~AlarmStrategy();

    virtual void activate();
    virtual void deactivate();

private:
    std::string name;
};

#endif // ALARMSTRATEGY_H
