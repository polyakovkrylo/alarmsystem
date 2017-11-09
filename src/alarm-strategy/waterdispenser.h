/*!
 * \file waterdispenser.h
 *
 * WaterDispenser class declaration
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

class WaterDispenser : public AlarmStrategy
{
public:
    WaterDispenser();
    ~WaterDispenser();
};
#endif // CALLFIREMEN_H
