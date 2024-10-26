#include <iostream>
using namespace std;
/*
Case1:
class B: public A{
// Order of execution of constructor -> first A() then B()
};
Case2:
class A: public B, public C{
// Order of execution of constructor-> B() then C() and A()
};
Case3:
class A: public B, virtual public C{
// Order of execution of constructor-> C() then B() and A()
};
*/
class Base1
{
    int data1;
public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 Class Constructor Called" << endl;
    }
    void Printdata1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 Class Constructor Called" << endl;
    }
    void Printdata2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int Derived1, Derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        Derived1 = c;
        Derived2 = d;
        cout << "Derived Class Constructor Called" << endl;
    }
    void PrintDataDerived()
        {
            cout << "The value of Derived1 is " << Derived1 << endl;
            cout << "The value of Derived2 is " << Derived2 << endl;
        }
};
int main()
{
Derived Rohit(1 , 2 , 3 ,4);
Rohit.Printdata1();
Rohit.Printdata2();
Rohit.PrintDataDerived();
    return 0;
}