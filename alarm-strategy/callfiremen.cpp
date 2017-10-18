#include "callfiremen.h"

using std::cout;
using std::endl;

CallFiremen::CallFiremen() :
    AlarmStrategy("Call firemen")
{

}

void CallFiremen::activate()
{
     cout << "Calling firemen..." << endl;
}

void CallFiremen::deactivate()
{
     cout << "Deactivating calling firemen..." << endl;
}
