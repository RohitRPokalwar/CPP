#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    double Salary;

public:
    string Name;
    string Subject;
    string Dept;
//Non Parameterised Constructor
    Teacher(){
        Dept = "Computer Science";
    }
//Parameterised Constructor
    Teacher(string Name ,string s){
        this->Name=Name; //Left vala object ka hai Right vala parameter ka hai
        Subject=s;
    }
//Copy Constructor
Teacher(Teacher &orgObj){
    cout<<"Using Copy Constructor"<<endl;
    this->Name=orgObj.Name;
    this->Subject=orgObj.Subject;
}
//Destructor
~Teacher(){
  cout<<"Hii"<<endl;
}
void setSalary(double S){
Salary =S;
}
double getSalary(){
    return Salary;
}
void getinfo(){
    cout<<"Name is "<<Name<<endl;
    cout<<"Subject of T2 is "<<Subject<<endl;
}
};
class Account
{
private :   //Encapsuluation
string Pass;
double Balance;
public :
string accountId;
string username;
};
int main()
{
Teacher();
Teacher T1;
T1.Name ="Rohit";
T1.setSalary(213458);
cout<<T1.Name<<endl;
cout<<T1.getSalary()<<endl;
cout<<T1.Dept<<endl;
Teacher T2("Rohit" , "Maths");
T2.getinfo();
Teacher T3(T2);
// T3.getinfo();
    return 0;
}