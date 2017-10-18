#ifndef ALARMSTRATEGYOWNER_H
#define ALARMSTRATEGYOWNER_H

#include <memory>
#include <list>

#include "alarmstrategy.h"

class AlarmStrategyOwner
{
public:
    typedef std::shared_ptr<AlarmStrategy> SPtr;

    explicit AlarmStrategyOwner();
    virtual ~AlarmStrategyOwner();

    void activateStrategies();
    void deactivateStrategies();

    void addStrategy(const SPtr &strategy);
    void removeStrategy(const SPtr &strategy);

private:
    std::list<SPtr> strategies_;
};

#endif // ALARMSTRATEGYOWNER_H
