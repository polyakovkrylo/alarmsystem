/*!
 * \file alarmsignal.h
 *
 * AlarmSignal class declaration
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#ifndef CALLPOLICE_H
#define CALLPOLICE_H

#include <iostream>
#include <string>

#include "alarmstrategy.h"

/*!
 * \ingroup AlarmStrategies
 * \brief Call police strategy class
 *
 * Dummy implementation of call police strategy.
 * Intended for testing purposes.
 */

class AlarmSignal : public AlarmStrategy
{
public:
    AlarmSignal();
    ~AlarmSignal();
};

#endif // CALLPOLICE_H
