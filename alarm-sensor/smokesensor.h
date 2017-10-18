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
#include <iostream>
#include <string>

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

private:
    /*!
     * \brief minimal value for activation
     */
    int threshold_;
};

#endif // SMOKESENSOR_H
