#include <iostream>
using namespace std;
class Student
{
    public : 
    string name;
    double cgpa;
    Student(string name , double cgpa){
        this->name=name;
        this->cgpa=cgpa;
    }
    void getInfo(){
        cout<<"Name of Student is "<<name<<endl;
        cout<<"Cgpa of Student is "<<cgpa<<endl;
    }
};
int main(){
Student s1("Rahul Kumar" , 8.9);
Student s2(s1);
s2.getInfo();
return 0;
}