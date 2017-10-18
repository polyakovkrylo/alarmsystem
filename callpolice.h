#ifndef CALLPOLICE_H
#define CALLPOLICE_H

#include <iostream>
#include <string>

#include "alarmstrategy.h"

class CallPolice : public AlarmStrategy
{
public:
    CallPolice();

    virtual void activate() override final;
    virtual void deactivate() override final;
};

#endif // CALLPOLICE_H
