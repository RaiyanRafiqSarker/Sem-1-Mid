#include <iostream>

using namespace std;

int main()
{
    int x = 2,z= 4 ,y, a ;
    y = (++x + ++x + ++x) ;
    cout << " the sum of y : " << y << endl ;

    a =(--z + x++ - --x) ;
    cout << " the sum of a : " << a << endl ;
    return 0;
}
