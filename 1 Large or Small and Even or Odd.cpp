#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, large, small;

    cout << " Type three numbers - ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n1 > n3)
    {
        large = n1;
    }
    else if (n2 > n3)
    {
        large = n2;
    }
    else
    {
        large = n3;
    }
    if (large % 2 == 0)
    {
        cout << "largest: " << large << ", it is even" << endl;
    }
    else
    {
        cout << "largest: " << large << ", it is odd" << endl;
    }

    if (n1 < n2 && n1 < n3)
    {

        small = n1;
    }
    else if (n2 < n3)
    {

        small = n2;
    }
    else
    {

        small = n3;
    }
    if (small % 2 == 0)
    {
        cout << "smallest: " << small << ", it is even" << endl;
    }
    else
    {
        cout << "smallest: " << small << ", it is odd" << endl;
    }

    return 0;
}
