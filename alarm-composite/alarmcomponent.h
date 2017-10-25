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
#include <memory>
#include <sstream>

#include "alarm-observer/alarmobservable.h"

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
class AlarmComponent : public AlarmObservable, public std::enable_shared_from_this<AlarmComponent>
{
public:
    typedef std::shared_ptr<AlarmComponent> SPtr;
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
    
    /*!
     * \brief Get root object of the group
     * 
     * Return root object of a group component is in or
     * component itself if a component is a root object
     */
    const SPtr getRootComponent();

    /*!
     * \brief Set the parent of the component
     * \param sptr parent
     */
    void setParent(const SPtr & sptr);

    /*!
     * \brief Read activation status
     */
    const bool & isActivated() {return activated_;}

    /*!
     * \brief Notify observers
     *
     * Notifies observers and passes notification
     * to the parent.
     *
     * \note this is an overloaded function of AlarmObservable::notify
     */
    virtual void notify(const std::string msg) override;

protected:
    /*!
     * \brief identificator of the component
     */
    std::string id_;

    /*!
     * \brief parent of the component
     */
    SPtr parent_;

    /*!
     * \brief activation flag
     */
    bool activated_;
};

bool compare_id(const AlarmComponent::SPtr &sptr1, const AlarmComponent::SPtr &sptr2);

#endif // ALARMCOMPONENT_H
