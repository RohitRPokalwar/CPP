#include <iostream>
using namespace std;
int main(){
    int x=8;
    int* ptr = &x; 
    cout<<x<<endl;
    *ptr=12;
    cout<<x;
return 0;
}