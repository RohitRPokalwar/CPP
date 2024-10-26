#include <iostream>
using namespace std;
int main(){
    int a=4;
    int* b=&a; // --> It is pointer variable
// & --> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
// * --> (Value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;
// Pointer to Pointer
int** c=&b;
    cout<<"The Address of b is "<<&b<<endl;
    cout<<"The Address of b is "<<c<<endl;
    cout<<"The Value at Address of b is "<<*c<<endl;
    cout<<"The Value at Address of b is "<<**c<<endl;
return 0;
}