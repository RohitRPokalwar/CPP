#include <iostream>
using namespace std;
/*Syntax
    class DerivedC : visibility-mode base1 , visibility-mode base2
    {
        Class body of class "DerivedC"
    }; */
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "Sum is " << base1int + base2int << endl;
    }
};
// The Inherited derived class will look like something
// Base1int-->Protected
// Base2int-->Protected
//Member Functions:
//set_base1int()-->Public
//set_base2int()-->Public
//show-->Public

int main()
{
    Derived Rohit;
    Rohit.set_base1int(25);
    Rohit.set_base2int(38);
    Rohit.show();

    return 0;
}