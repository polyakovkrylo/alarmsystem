/*!
 * \file alarmobservable.h
 *
 * AlarmObservable class declaration
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#ifndef ALARMOBSERVABLE_H
#define ALARMOBSERVABLE_H

#include <list>
#include <string>
#include <memory>

#include "alarmobserver.h"

/*!
 * \defgroup AlarmObservation
 *
 * \brief Observer pattern implementation
 *
 * Includes observable class AlarmObservable, which
 * is inherited by AlarmComponent
 * and observer class AlarmObserver which should be
 * inherited by any alarm observer imlementation
 */

/*!
 * \ingroup AlarmObservation
 *
 * \brief Observable class of observer structure
 *
 * Gives an opportunity to its successor to notify attached
 * observer classes
 */

class AlarmObservable
{
public:
    typedef std::shared_ptr<AlarmObserver> SPtr;

    /*!
     * \brief Class constructor
     */
    AlarmObservable();
    virtual ~AlarmObservable();

    /*!
     * \brief Add observer to the list of observers
     * \param sptr pointer to observer
     */
    void addObserver(const SPtr &sptr);

    /*!
     * \brief Remove observer from the list of observers
     * \param sptr pointer to observer
     */
    void removeObserver(const SPtr &sptr);

    /*!
     * \brief Notify observers
     * \param msg message to be sent
     */
    virtual void notify(const std::string msg);

private:
    /*!
     * \brief list of observers
     */
    std::list<SPtr> observers_;
};

#endif // ALARMOBSERVABLE_H
