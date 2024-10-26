#include <iostream>
using namespace std;
int fib(int num){
    if (num<=1)
    {
        return 1;
    }
    return fib(num-2)+fib(num-1);
}
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    cout << "The factorial of "<<num<<"is "<<fib(num)<<endl;
return 0;
}