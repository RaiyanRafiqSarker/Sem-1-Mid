#include <iostream>

using namespace std;

int main()
{
    char ch ;
    cout << " Enter an alphabet: " << endl;
    cin >> ch ;
    switch(ch){

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

    cout << "The word you entered it's a Vowel";
    break;
    default:
    cout<<"The word you entered it's a Consonant";
}
    return 0;
}
