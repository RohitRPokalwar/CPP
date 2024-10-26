#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a value of a"<<endl;
    cin>>a;
    cout<<"Enter a value of b"<<endl;
    cin>>b;
    cout<<"Enter a value of c"<<endl;
    cin>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<"The Bigger number You have entered is "<<a;
        }
        else
        {
            cout<<"The Bigger number You have entered is "<<c;
        } 
    }
    else
    {
        if (b>c)
        {
            cout<<"The Bigger number You have entered is "<<b;
        }
        else
        {
            cout<<"The Bigger number You have entered is "<<c;
        }
        
        
    }
    
    
    
    
    

return 0;
}