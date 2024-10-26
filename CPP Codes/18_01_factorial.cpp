#include <iostream>
using namespace std;
int factorial (int num){
if (num<=1)
{
    return 1;
}
return num * (factorial(num-1));
}
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    cout << "The factorial of "<<num<<"is "<<factorial(num)<<endl;
return 0;
}