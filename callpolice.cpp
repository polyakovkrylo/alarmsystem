#include "callpolice.h"

using std::cout;
using std::endl;

CallPolice::CallPolice() :
    AlarmStrategy("Call police")
{

}

void CallPolice::activate()
{
     cout << "Calling police..." << endl;
}

void CallPolice::deactivate()
{
     cout << "Deactivating calling police..." << endl;
}
