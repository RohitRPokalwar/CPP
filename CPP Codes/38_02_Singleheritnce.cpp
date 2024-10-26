#include <iostream>
using namespace std;
class base
{
    int data1; // Private (Inheriated)
public:
    int data2;
    void setData();
    int getData1(); // It can be use if private data is there but we acn use as public data
    int getData2();
};
void base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int base ::getData1()
{
    return data1;
}
int base ::getData2()
{
    return data2;
}

class derived : private base
{
    int data3;

public:
    void Process();
    void display();
};
void derived ::Process(void)
{
    setData();
    data3 = data2 * getData1();
}
void derived ::display()
{
    cout << "The value of data 1 is " << getData1() << endl; // As data1 is private then we cannot write data1
    cout << "The value of data 2 is " << getData2() << endl; // data2<<endl
    cout << "The value of data 3 is " << data3 << endl;
}

int main()
{
    derived der;
    //der.setData();
    der.Process();
    der.display();
    return 0;
}