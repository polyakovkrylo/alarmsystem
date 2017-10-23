/*!
 * \file smokesensor.h
 *
 * SmokeSensor class declaration
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#ifndef SMOKESENSOR_H
#define SMOKESENSOR_H

#include <cmath>

#include "abstractsensor.h"

/*!
 * \ingroup AlarmSensors
 *
 * \brief Smoke sensor class
 *
 * Dummy implementation of smoke sensor component.
 * Intended for testing purposes.
 */

class SmokeSensor : public AbstractSensor
{
public:
    /*!
     * \brief Class constructor
     * \param threshold minimal value for activation
     * \param id identificator of the sensor
     * \param vendor vendor name
     */
    SmokeSensor(int threshold = 20,
                std::string id = "Unkown id",
                std::string vendor = "Unkown vendor");

    virtual ~SmokeSensor() override;

    /*!
     * \brief Update of the current value
     *
     * Randomly defines current value of the signal and
     * triggers the activation if the value higher than
     * the threshold
     */
    virtual void update() override;

    /*!
     * \brief String stream containing info about the sensor
     */
    virtual const std::string getInfo() const override;

    /*!
     * \brief Threshold access function
     * \return current threshold value
     */
    int getThreshold() const {return threshold_;}

private:
    /*!
     * \brief minimal value for activation
     */
    int threshold_;
};

/*!
 * \ingroup AlarmSensor
 * \brief Passes info about the sensor to the output stream
 * \note This is an overloaded function
 */
inline std::ostream & operator<<(std::ostream & lhs,
                                 const std::shared_ptr<SmokeSensor> & rhs)
{lhs<< rhs->getInfo();return lhs;}

#endif // SMOKESENSOR_H
