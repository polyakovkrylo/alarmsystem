/*!
 * \file alarmcomponentgroup.h
 *
 * AlarmComponentGroup class declaration
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#ifndef ALARMCOMPONENTGROUP_H
#define ALARMCOMPONENTGROUP_H

#include <memory>
#include <string>
#include <list>

#include "alarmcomponent.h"

/*!
 * \ingroup AlarmComposite
 *
 * \brief Group component class of composite structure
 */

class AlarmComponentGroup : public AlarmComponent
{
public:
    typedef std::shared_ptr<AlarmComponent> SPtr;

    /*!
     * \brief Class constructor
     * \param id identificator of the component
     */
    explicit AlarmComponentGroup(std::string id = "unknown group");
    virtual ~AlarmComponentGroup() override;

    /*!
     * \brief Activation of the component group
     *
     * Print message with id of the group and
     * ativate each component in the group
     */
    virtual void activate() final override;

    /*!
     * \brief Dectivation of the component group
     *
     * Print message with id of the group and
     * deativate each component in the group
     */
    virtual void deactivate() final override;

    /*!
     * \brief Print info about the group
     * Print info about the group, including
     * info about each component inside the group
     */
    virtual void printInfo() override;

    /*!
     * \brief Add component to the group
     * \param sptr pointer to the component
     */
    void add(const SPtr &sptr);

    /*!
     * \brief Remove component from the group
     * \param sptr pointer to the component
     */
    void remove(const SPtr &sptr);

private:
    /*!
     * \brief list of children
     */
    std::list<SPtr> children_;
};

#endif // ALARMCOMPONENTGROUP_H
