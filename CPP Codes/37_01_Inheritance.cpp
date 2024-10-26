#include <iostream>
using namespace std;
//base class
class Employee{
public :
int id;
float salary;
Employee(int InpId){ 
    id =InpId;
    salary=254465;
}
Employee(){}
};
//Creating a Programmer Class derived from Employee Base Class;
/*
 // Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
Employee Harry(1) , Rohit(2);
cout<<Harry.salary<<endl;
cout<<Rohit.salary<<endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
return 0;
}