#include <iostream>
using namespace std;
int main(){
    int x=8;
    int* p = &x; //It is used to store addressess
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<"The value of x is "<<*p; //value can be Star Operator   
return 0;
}