#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count; // Class variable static
public:
    void setData(void)
    {
        cout << "Enter a Id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of employee is " << id << " and Empolyee number is " << count << endl;
    }
    static void setCount() // Class variable static Function
    {
        cout << "The Employee count is " << count << endl;
    }
};
int Employee ::count = 1000; //-->Count starts from 1000
int main()
{
    Employee Rohit, Ritesh, R;
    Rohit.setData();
    Rohit.getData();
    Employee::setCount();

    Ritesh.setData();
    Ritesh.getData();
    Employee::setCount();

    R.setData();
    R.getData();
    Employee::setCount();


    return 0;
}