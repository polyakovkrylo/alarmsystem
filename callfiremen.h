#ifndef CALLFIREMEN_H
#define CALLFIREMEN_H


#include <iostream>
#include <string>

#include "alarmstrategy.h"

class CallFiremen : public AlarmStrategy
{
public:
    CallFiremen();

    virtual void activate() override final;
    virtual void deactivate() override final;
};
#endif // CALLFIREMEN_H
