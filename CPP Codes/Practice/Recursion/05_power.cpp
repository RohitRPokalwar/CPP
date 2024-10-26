#include <iostream>
using namespace std;
int pow(int x , int y)
{
    if(y==0) return 1;
    return x * pow(x, y-1);
}
int main(){
    int x, y;
    cout<<"Enter base : ";
    cin>>x;
    cout<<"Enter power : ";
    cin>>y;
    cout<<pow(x, y);
return 0;
}