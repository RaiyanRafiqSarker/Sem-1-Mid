#include <iostream>

using namespace std;

int main()
{
    int age , month , days, hours , minutes , seconds ;
    cout << " enter your age " << endl ;
    cin >> age ;
    month = age*12 ;
    cout << " your age in month : " << month << endl ;
    days = age*365 ;
    cout << " your age in  days : " << days << endl ;
    hours = days*24 ;
    cout << " your age in hours : " << hours << endl ;
    minutes = hours*60 ;
    cout << " your age in minutes : " << minutes << endl ;
    seconds=minutes*60 ;
    cout << " your age in seconds : " << seconds << endl ;

    return 0;
}
