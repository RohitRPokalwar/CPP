#include <iostream>
using namespace std;
int main(){
    //Method 1
    /*for (int i = 0; i < 200; i++)
    {
        if(i%2==0){
        cout<<i<<endl;
        }
    } */
   //Method 2
   for (int i = 0; i < 100; i=i+2)
   {
    cout<<i<<endl;
   }
return 0;
}