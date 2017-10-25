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

class AbstractSensor : public AlarmComponent, public AlarmStrategyOwner
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
     * \brief Pure virtual function to be defined in implementation class
     */
    virtual void update() = 0;

    /*!
     * \brief Activates the sensor, i.e. activates alarm strategies
     */
    virtual void activate();
    /*!
     * \brief Deactivates the sensor, i.e. deactivates alarm strategies
     */
    virtual void deactivate();

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
    virtual const std::string getInfo() const;

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

// How to make it work uniformely for successors?
/*!
 * \ingroup AlarmSensor
 * \brief Passes info about the sensor to the output stream
 * \note This is an overloaded function
 */
std::ostream & operator<<(std::ostream & lhs,
                          const std::shared_ptr<AbstractSensor> & rhs);

#endif // ALARMSENSOR_H
