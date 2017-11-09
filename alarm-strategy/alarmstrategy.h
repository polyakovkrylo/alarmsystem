/*!
 * \file alarmstrategy.h
 *
 * AlarmStrategy class declaration
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#ifndef ALARMSTRATEGY_H
#define ALARMSTRATEGY_H

#include <iostream>
#include <string>

/*!
 * \defgroup AlarmStrategies
 *
 * \brief Strategy pattern implementation
 */

/*!
 * \ingroup AlarmStrategies
 * \brief Strategy class implementation of strategy pattern
 */

class AlarmStrategy
{
public:
    /*!
     * \brief Class constructor
     * \param name name of the strategy
     */
    explicit AlarmStrategy(std::string name = "Unknown strategy");
    virtual ~AlarmStrategy();

    /*!
     * \brief Trigger the strategy execution
     */
    virtual void activate();

    /*!
     * \brief Deactivate the strategy execution
     */
    virtual void deactivate();

    /*!
     * \brief Number of activation times
     *
     * Returns number of times the strategy
     * has been currently activated
     */
    const int & activated();

private:
    /*!
     * \brief name of the strategy
     */
    std::string name_;

    /*!
     * \brief activation flag
     */
    int activatedCount_;
};

#endif // ALARMSTRATEGY_H
