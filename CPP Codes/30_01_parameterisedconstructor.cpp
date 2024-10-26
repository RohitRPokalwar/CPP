#include <iostream>
using namespace std;
class Complex{
    int a, b;
public:
Complex(int , int);
void printNumber(){
    cout<<"The Complex number is "<<a<<"+"<<b<<"i"<<endl;
}
};

Complex::Complex(int x , int y){   // --> This is parameterconstructor it accepts parameter
    a=x;
    b=y;
}
int main(){
    //Method 1
    //Implicit call
    Complex a(4 , 8);
    a.printNumber();
    //Explicit Call
    Complex b = Complex(894 , 8868);
    b.printNumber();
    
return 0;
}
