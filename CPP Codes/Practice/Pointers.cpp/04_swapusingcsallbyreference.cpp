#include <iostream>
using namespace std;
void swapnumbers(int* m , int* n){
int temp=*m;
*m=*n;
*n=temp;
}
int main(){
    int x= 4;
    int y= 7;
    cout<<x<<" "<<y<<endl;
    swapnumbers(&x,&y);
    cout<<x<<" "<<y<<endl;
    
return 0;
}