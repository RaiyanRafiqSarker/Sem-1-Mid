#include <iostream>

using namespace std;

int main()
{
  float m, feet;
  cout << "Enter the length in meters: ";
  cin >> m;
  feet = m * 3.28084;
  cout << "Equivalent length in feet: " << feet << endl;

  return 0;
}
