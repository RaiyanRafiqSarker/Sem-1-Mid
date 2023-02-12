#include <iostream>

using namespace std;

int main()
{
    int year ;
    cout << "enter year: " ;
    cin >> year ;
    if (year % 400 == 0) {
    cout << " this year is leap-year " << year << endl ;
    }
    else if (year % 100 == 0){
    cout << " this year is not leap-year " << year << endl ;
    }
    else {
    cout << " this is not leap-year " << endl ;
    }
    return 0;
}
