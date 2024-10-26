#include <iostream>
using namespace std;
//int sum (int a, int b) --> Acceptable
//int sum (int a, b) --> Not Acceptable
//int sum (int , int ) --> Acceptable
int sum (int a, int b){
    int c;
    c=a+b;
    return c;
    
    //Formal parameters a and b will be taking values from actual parameters num1 , num2
}
//void g(void) --> Acceptable
void g(){
    cout<<"\n Good Evening";
}
int main(){
    int num1 , num2;
    cout<<"Enter a Num1"<<endl;
    cin>>num1;
    cout<<"Enter a Num2"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The Sum is "<<sum (num1 , num2);
    g();
return 0;
}