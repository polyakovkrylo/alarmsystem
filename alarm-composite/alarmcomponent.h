/*!
 * \file alarmcomponent.h
 *
 * AlarmComponent class declaration
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#ifndef ALARMCOMPONENT_H
#define ALARMCOMPONENT_H

#include <string>
#include <iostream>

/*!
 * \defgroup AlarmComposite
 *
 * \brief Composite pattern implementation
 *
 * Includes base class AlarmComponent, leaf class AbstractSensor,
 * and group class AbstractComponentGroup
 */

/*!
 * \ingroup AlarmComposite
 *
 * \brief Base component class of composite structure
 */
class AlarmComponent
{
public:
    /*!
     * \brief Class constructor
     * \param id identificator of the component
     */
    explicit AlarmComponent(std::string id);
    virtual ~AlarmComponent();

public:
    /*!
     * \brief Activation of the component
     */
    virtual void activate();
    /*!
     * \brief Deactivation of the component
     */
    virtual void deactivate();
    /*!
     * \brief Print component info
     */
    virtual void printInfo();

    /*!
     * \brief Returns id of the component
     */
    const std::string & getId() const {return id_;}

protected:
    /*!
     * \brief identificator of the component
     */
    std::string id_;

    /*!
     * \brief activation flag
     */
    bool activated_;
};

#endif // ALARMCOMPONENT_H
