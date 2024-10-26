#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    // 1 2 4 8 16 
    int a= 1;
    for (int i = 0; i < n; i++)
    {
        cout<<a<<endl;
        a=a*2;
    }
return 0;
}