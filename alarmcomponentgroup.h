#ifndef ALARMCOMPONENTGROUP_H
#define ALARMCOMPONENTGROUP_H

#include <memory>
#include <string>
#include <list>

#include "alarmcomponent.h"

class AlarmComponentGroup : public AlarmComponent
{
public:
    typedef std::shared_ptr<AlarmComponent> SPtr;

    explicit AlarmComponentGroup(std::string id_ = "unknown group");
    virtual ~AlarmComponentGroup() override;

    virtual void activate() final override;
    virtual void deactivate() final override;
    virtual void printInfo() override;

    void add(const SPtr &sptr);
    void remove(const SPtr &sptr);

private:
    std::list<SPtr> children_;
};

#endif // ALARMCOMPONENTGROUP_H
