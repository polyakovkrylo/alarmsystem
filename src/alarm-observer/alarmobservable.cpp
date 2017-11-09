/*!
 * \file alarmobservable.cpp
 *
 * AlarmObservable class definition
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#include "alarmobservable.h"

using std::string;

AlarmObservable::AlarmObservable() :
    observers_{}
{

}

AlarmObservable::~AlarmObservable()
{

}

void AlarmObservable::addObserver(const AlarmObservable::SPtr &sptr)
{
    observers_.push_back(sptr);
}

void AlarmObservable::removeObserver(const AlarmObservable::SPtr &sptr)
{
    observers_.remove(sptr);
}

void AlarmObservable::notify(const string msg)
{
    for(SPtr & observer : observers_) {
        observer->handle(msg);
    }
}
