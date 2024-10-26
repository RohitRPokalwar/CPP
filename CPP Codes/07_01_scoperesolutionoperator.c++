#include <iostream>
using namespace std;

int c = 95; //global value of c
int main(){
    int a, b , c;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl; 
    cin>>b;
    c=a+b;
    cout<<"Value of a+b is "<<c<<endl;
    cout<<"Global Value of c is "<<::c<<endl;
    // This denote :: for global operator
    // Float written as f or F
    // Long Double written ass l or L
    float d=25.6F;
    long double e=25.6L;
    cout<<"The Value of d is "<<d<<endl<<"The Value of e is "<<e<<endl;

    
return 0;
}