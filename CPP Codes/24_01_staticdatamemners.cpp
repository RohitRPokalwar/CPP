#include <iostream>
using namespace std;
class Employee{
    int id;
    static int count; //Class variable static
    public : 
    void setData(void){
        cout<<"Enter a Id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of employee is "<<id<<" and Empolyee number is " << count<<endl;
    }
};      
int Employee :: count;
int main(){
    Employee Rohit ,Ritesh ,R;
    // Rohit.id = 1;
    // Rohit.count=1; // cannot do this as id and count are private
    Rohit.setData();
    Rohit.getData();

    Ritesh.setData();
    Ritesh.getData();

    R.setData();
    R.getData();

return 0;
}