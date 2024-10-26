#include <iostream>
using namespace std;
int main(){
    int x=2;
    int y=5;
    cout<<x<<" "<<y<<endl;
   //Method 1   Using Another Variable
    // int temp = x;
    // x=y;
    // y=temp;
    // cout<<x<<" "<<y;
    //Method 2 Not Using Another Variable
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y;
return 0;
}