/*!
 * \file callfiremen.h
 *
 * CallFiremen class declaration
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#ifndef CALLFIREMEN_H
#define CALLFIREMEN_H


#include <iostream>
#include <string>

#include "alarmstrategy.h"

/*!
 * \ingroup AlarmStrategies
 * \brief Call firemen strategy class
 *
 * Dummy implementation of call firemen strategy.
 * Intended for testing purposes.
 */

class CallFiremen : public AlarmStrategy
{
public:
    CallFiremen();
    virtual void activate() override final;
    virtual void deactivate() override final;
};
#endif // CALLFIREMEN_H
