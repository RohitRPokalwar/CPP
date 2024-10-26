#include <iostream>
using namespace std;
typedef union money
{
    int mirchikg;
    char favchar;
    float money1;
}mj;

int main(){
     mj h1;
     h1.mirchikg=5;
     h1.favchar='m';
     h1.money1=200;
     cout<<"The Value Is "<<h1.mirchikg<<endl;
     //Union mai sirf ek baar hi kar sakte ho
     //do baar union ka cout karenge toh output nahi milega
    
    
return 0;
}