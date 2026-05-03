#include <iostream>
using namespace std;
string Timetravel(int hours, int mints);
main()
{
    cout << " Enter hours (in 24-hour format) : ";
    int hours;
    cin >> hours;
    cout << " Enter minutes (in 24-hour format) : ";
    int mints;
    cin >> mints;
    cout << Timetravel(hours, mints);
}

string Timetravel(int hours, int mints)
{
    mints = mints + 15;
    
    if (mints >= 60)
    {
        mints = mints - 60 ;
        hours = hours + 1;
    }

    if (hours == 24)
    {
        hours = 0;
    }
    return to_string(hours) + ":" + to_string(mints);
}