#ifndef ALARMCOMPONENT_H
#define ALARMCOMPONENT_H

#include <string>
#include <iostream>


class AlarmComponent
{
public:
    explicit AlarmComponent(std::string id);
    virtual ~AlarmComponent();

public:
    virtual void activate();
    virtual void deactivate();
    virtual void printInfo();

    std::string getId();

protected:
    std::string id;
};

#endif // ALARMCOMPONENT_H
