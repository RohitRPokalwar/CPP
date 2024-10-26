#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout<<"Enter Your Age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You have Entered Your age is between 10 to 19"<<endl;
        break;
    case 22:
    cout<<"You have Entered Your Age is Between 20 to 29"<<endl;
        break;
    
    default: 
    cout<<"No case"<<endl;
        break;
    }

    cout<<"Program Is Running"<<endl;
    return 0;
}
