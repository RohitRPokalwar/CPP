#include <iostream>
using namespace std;
class A{
int a;
public :
// A &set_Data(int a){
void set_Data(int a){
    this->a=a;
    // return *this;
}
void get_Data(){
    cout<<"The value of a is "<<a<<endl;
}
};
int main(){
    //this is a keyword which is a pointer which points to the object invokes the member functiom
    A a;
    // a.set_Data(98).get_Data();
    a.set_Data(98);
    a.get_Data();
return 0;
}