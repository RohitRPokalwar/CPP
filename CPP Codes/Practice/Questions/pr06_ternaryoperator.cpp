#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    // (condition) ? if true : if false;
    (a%2==0) ? cout<<"Number is Even" : cout<<"Number is Odd";
return 0;
}