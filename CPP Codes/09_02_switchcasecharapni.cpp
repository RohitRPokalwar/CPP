#include <iostream>
using namespace std;
int main()
{


    char button;
    cout<<"Enter a char"<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout << "Hello";
        break;
    case 'b':
        cout << "Namaskar";
        break;
    case 'c':
        cout << "Namaste";
        break;

    default:
        cout << "Not There";
        break;
    }
    return 0;
};