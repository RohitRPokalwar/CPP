#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int i;
    for ( i = 2; i < num; i++)
    {
        if ((num%i)==0)
        {
            cout<<"Non Prime Number";
            break;
        }   
        
    }
    if (i==num)
    {
        cout<<"Prime";
    }
    
return 0;
}