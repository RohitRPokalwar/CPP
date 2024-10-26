#include <iostream>
using namespace std;
int main(){
    int num1;
    cin>>num1;
    char op;
    cin>>op;
    int num2;
    cin>>num2;
    switch (op)
    {
    case '+':
        cout<<"The Value of Sum is : "<<num1+num2;
        break;
    case '-':
        cout<<"The Value of Subract is : "<<num1-num2;
        break;
    case '*':
        cout<<"The Value of Multiply is : "<<num1*num2;
        break;        
    case '/':
        cout<<"The Value of Division is : "<<num1/num2;
        break;        
        default :
        cout<<"Invalid Operator";
        break;
    }
return 0;
}