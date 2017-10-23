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

#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include <cmath>

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

    /*!
     * \brief String stream containing info about the sensor
     */
    virtual const std::string getInfo() const override;

    /*!
     * \brief Returns mininal sensitive distance
     */
    int getMinDistance() const {return minDistance_;}

    /*!
     * \brief Returns maximal sensitive distance
     */
    int getMaxDistance() const {return maxDistance_;}

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

/*!
 * \ingroup AlarmSensor
 * \brief Passes info about the sensor to the output stream
 * \note This is an overloaded function
 */
inline std::ostream & operator<<(std::ostream & lhs,
                                 const std::shared_ptr<MotionSensor> & rhs)
{lhs<< rhs->getInfo();return lhs;}

#endif // MOTIONSENSOR_H
