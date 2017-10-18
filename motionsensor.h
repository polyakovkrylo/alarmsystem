#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H


#include <cmath>
/*!
 * \file motionsensor.h
 *
 * MotionSensor class declaration
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#include <iostream>
#include <string>

#include "abstractsensor.h"

/*!
 * \ingroup AlarmSensors
 *
 * \brief Motion sensor class
 *
 * Dummy implementation of motion sensor component.
 * Intended for testing purposes.
 */

class MotionSensor : public AbstractSensor
{
public:
    /*!
     * \brief Class constructor
     * \param minDistance minimal distance of activation
     * \param maxDistance maximal distance of activation
     * \param id identificator of the sensor
     * \param vendor vendor name
     */
    MotionSensor(int minDistance = 0,
                 int maxDistance = 20,
                 std::string id = "Unkown id",
                 std::string vendor = "Unkown vendor");

    virtual ~MotionSensor() override;

    /*!
     * \brief Update of the current value
     *
     * Randomly defines current value of the signal and
     * triggers the activation if the value is within
     * the active range
     */
    virtual void update() override;

private:
    /*!
     * \brief minimal distance of activation
     */
    int minDistance_;

    /*!
     * \brief maximal distance of activation
     */
    int maxDistance_;
};


#endif // MOTIONSENSOR_H
