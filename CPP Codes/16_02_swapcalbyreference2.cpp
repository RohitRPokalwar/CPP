#include <iostream>
using namespace std;
int sum(int a , int b){
    int c=a+b;
    return c;
}
// This will not swap
void swap(int a , int b){  //temp a b
    int temp=a;            //4    4  5
    a=b;                   //4    5   5
    b=temp;                // 4    5  4
}
// METHOD 2
// Call by reference using C++ reference variables Lecutre 07_03referencevariables
void swapReferencevar(int &a , int &b){  //temp a b
    int temp=a;                        //4    4   5
    a=b;                               //4    5   5
    b=temp;                            // 4   5   4
}
int main(){
    int x = 4, y= 5;
    cout<<"The Sum of 4 and 5 is "<<sum ( 4 , 5 )<<endl;
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
    //swap(x , y); // This will not swap a and b
    swapReferencevar(x , y);
     cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
return 0;
}