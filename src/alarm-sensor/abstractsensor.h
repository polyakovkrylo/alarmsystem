/*!
 * \file abstractsensor.h
 *
 * AbstractSensor class declaration
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#ifndef ALARMSENSOR_H
#define ALARMSENSOR_H

#include <iostream>
#include <string>
#include <memory>
#include <sstream>

#include "alarm-composite/alarmcomponent.h"
#include "alarm-strategy/alarmstrategyowner.h"

/*!
 * \defgroup AlarmSensors
 *
 * \brief Sensors used in the system
 *
 * Includes common predeccessor class AbstractSensor
 * and its successors.
 *
 * \note In order to add sensor to the application,
 * one needs to inherit a new sensor class from AbstractSensor
 */


/*!
 * \ingroup AlarmSensors
 * \ingroup AlarmComposite
 *
 * \brief Abstract sensor class
 *
 * Defines common operations for alarm sensors
 *
 * \note When inheriting from AbstractSensor, one needs
 * to redefine pure virtual method update()
 */

class AbstractSensor : public AlarmComponent
{
public:
    /*!
     * \brief Class constructor
     * \param id identificator of the sensor
     * \param type type of the sensor
     * \param vendor vendor name
     */
    explicit AbstractSensor(std::string id = "Unknown id",
                            std::string type = "Unknown type",
                            std::string vendor = "Unknown vendor");

    virtual ~AbstractSensor() override;

    /*!
     * \brief Prints info about the sensor
     */
    virtual void printInfo() override;

    /*!
     * \brief Pure virtual function to be defined in implementation class
     */
    virtual void update() = 0;

    /*!
     * \brief Returns vendor name
     */
    std::string getVendor() const {return vendor_;}

    /*!
     * \brief Returns type of sensor
     */
    const std::string getType() const {return type_;}

    /*!
     * \brief String stream containing info about the sensor
     */
    virtual const std::string getInfo();

private:
    /*!
     * \brief Type of sensor
     */
    const std::string type_;

    /*!
     * \brief Vendor name
     */
    std::string vendor_;
};

/*!
 * \brief Same as AbstractSensor::activate()
 * \note This is an overloaded function
 */
inline const std::shared_ptr<AbstractSensor> & operator++(const std::shared_ptr<AbstractSensor> & rhs)
{rhs->activate(); return rhs;}

/*!
 * \brief Same as AbstractSensor::deactivate()
 * \note This is an overloaded function
 */
inline const std::shared_ptr<AbstractSensor> & operator--(const std::shared_ptr<AbstractSensor> & rhs)
{rhs->deactivate(); return rhs;}

/*!
 * \ingroup AlarmSensor
 * \brief Passes info about the sensor to the output stream
 * \note This is an overloaded function
 */
std::ostream & operator<<(std::ostream & lhs,
                          const std::shared_ptr<AbstractSensor> & rhs);

/*!
 * \ingroup AlarmSensor
 * \brief Sorting by vendor functor for AlarmSensors
 */
class compareByVendor
{
public:
    inline bool operator() (const AlarmComponent::SPtr &sptr1,
                     const AlarmComponent::SPtr &sptr2){
        return (std::dynamic_pointer_cast<AbstractSensor>(sptr1)->getVendor()
                < std::dynamic_pointer_cast<AbstractSensor>(sptr2)->getVendor());
    }
};

/*!
 * \ingroup AlarmSensor
 * \brief Sorting by type functor for AlarmSensors
 */
class compareByType
{
public:
    inline bool operator() (const AlarmComponent::SPtr &sptr1,
                     const AlarmComponent::SPtr &sptr2){
        return (std::dynamic_pointer_cast<AbstractSensor>(sptr1)->getType()
                < std::dynamic_pointer_cast<AbstractSensor>(sptr2)->getType());
    }
};

/*!
 * \ingroup AlarmSensor
 * \brief Sorting by vendor by type functor for AlarmSensors
 */
class compareByVendorByType
{
public:
    inline bool operator() (const AlarmComponent::SPtr &sptr1,
                     const AlarmComponent::SPtr &sptr2){
        std::shared_ptr<AbstractSensor> s1 =
                std::dynamic_pointer_cast<AbstractSensor>(sptr1);
        std::shared_ptr<AbstractSensor> s2 =
                std::dynamic_pointer_cast<AbstractSensor>(sptr2);
        if(s1->getVendor() != s2->getVendor())
            return s1->getVendor() < s2->getVendor();
        else
            return (s1->getId() < s2->getId());
    }
};

#endif // ALARMSENSOR_H
