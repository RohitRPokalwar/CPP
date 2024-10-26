#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // Creating a constructor
    //  Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    Complex(void); // constructor
    void printnumber()
    {
        cout << "The Complex Number is " << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(void) // This is default constructor as it not accept parameters
{
    a = 5;
    b = 8;
}
int main()
{
    Complex c;
    c.printnumber();
    return 0;
}
