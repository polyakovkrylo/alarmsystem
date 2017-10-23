/*!
 * \file toxicsensor.h
 *
 * ToxicSensor class declaration
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#ifndef TOXICSENSOR_H
#define TOXICSENSOR_H

#include <cmath>

#include "abstractsensor.h"


/*!
 * \ingroup AlarmSensors
 *
 *
 * \brief Toxic sensor class
 * Dummy implementation of toxic sensor component.
 * Intended for testing purposes.
 */

class ToxicSensor : public AbstractSensor
{
public:
    /*!
     * \brief The GasType enum
     *
     * Specifies types of Gas to which
     * toxic sensor can be sensitive
     */
    enum GasType {
        Chlorine,
        Bromine
    };

    /*!
     * \brief Class constructor
     * \param gas type of gas being detected by the sensor
     * \param threshold minimal value for activation
     * \param id identificator of the sensor
     * \param vendor vendor name
     */
    ToxicSensor(GasType gas = Chlorine,
                int threshold = 20,
                std::string id = "Unkown id",
                std::string vendor = "Unkown vendor");

    virtual ~ToxicSensor() override;

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
     * \brief Returns string that contains name of gas
     */
    const std::string getGasType() const;

    /*!
     * \brief Returns current threshold value
     */
    int getThreshold() const {return threshold_;}

private:
    /*!
     * \brief type of gas being detected by the sensor
     */
    GasType gasType_;

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
                                 const std::shared_ptr<ToxicSensor> & rhs)
{lhs<< rhs->getInfo();return lhs;}

#endif // TOXICSENSOR_H
