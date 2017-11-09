/*!
 * \file alarmobserver.cpp
 *
 * AlarmObserver class definition
 *
 * \version 1.0
 *
 * \author Vladimir Poliakov
 * \author Brian Segers
 */

#include "alarmobserver.h"

using std::string;
using std::cout;
using std::endl;

AlarmObserver::AlarmObserver(string name) :
    name_{name}
{

}

AlarmObserver::~AlarmObserver()
{

}

void AlarmObserver::handle(const string &msg)
{
    cout << endl << name_ << " received: " << endl
         << msg << endl;
}
