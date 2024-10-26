#include <iostream>
using namespace std;
int main(){
    class Employee{
        int id, salary;
    public : 
    void setId(void){
        salary=122;
        cout<<"Enter Your Id"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"Your Id is "<<id<<endl;
    }
    };
    //METHOD 1
//Employee Rohit , Sanat , Ritesh , Sarthika;
//METHOD 1
//Rohit.setId();
//Rohit.getId();
//METHOD 2
Employee fb[4];
for (int i = 0; i < 4; i++)
{
    fb[i].setId();
    fb[i].getId();
}


return 0;
}