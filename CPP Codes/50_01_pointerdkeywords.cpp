#include <iostream>
using namespace std;
int main(){
    // Basic Example
    int a =4;
    int* ptr =&a;
    cout<<"The value of a is "<<*(ptr)<<endl;
    //New Keyword
   // int *p = new int(40);
   float *p = new float (99.56);
    cout<<"The Value of Adress at P is "<<*p<<endl;
   int *arr = new int [3];
   arr[0]=5;
   *(arr+1)=6;
   arr[2]=7;
   cout<<"The value of Arr[0] is "<<arr[0]<<endl;
   cout<<"The value of Arr[1] is "<<arr[1]<<endl;
   cout<<"The value of Arr[2] is "<<arr[2]<<endl;
return 0;
}