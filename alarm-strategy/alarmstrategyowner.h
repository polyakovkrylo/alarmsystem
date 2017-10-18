/*!
 * \file alarmstrategyowner.h
 *
 * AlarmStrategyOwner class declaration
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#ifndef ALARMSTRATEGYOWNER_H
#define ALARMSTRATEGYOWNER_H

#include <memory>
#include <list>

#include "alarmstrategy.h"

/*!
 * \ingroup AlarmStrategies
 * \brief Context class implementation of strategy pattern
 */

class AlarmStrategyOwner
{
public:
    typedef std::shared_ptr<AlarmStrategy> SPtr;

    explicit AlarmStrategyOwner();
    virtual ~AlarmStrategyOwner();

    /*!
     * \brief Activate all strategies held by the instance
     */
    void activateStrategies();

    /*!
     * \brief Deactivate all strategies held by the instance
     */
    void deactivateStrategies();

    /*!
     * \brief Add strategy to the context
     * \param strategy strategy to be added
     */
    void addStrategy(const SPtr &strategy);

    /*!
     * \brief Remove strategy from the context
     * \param strategy to be removed
     */
    void removeStrategy(const SPtr &strategy);

private:
    /*!
     * \brief list of strategies in the context
     */
    std::list<SPtr> strategies_;
};

#endif // ALARMSTRATEGYOWNER_H
