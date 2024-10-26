#include <iostream>
using namespace std;
int main()
{
    //EXERCISE 1
   int i=20 , n;
    // 20     22
   n = i++ + ++i;
   cout<<n<<endl;
    // *******************************
    //EXERCISE 2
    int q=2 , j=20 ,k=25 , m;
    // m= 2 -  20 - 25    + 1  +  3   + 19  + 19
       m= q-- - j-- - k-- + q++ + ++q + j++ + --j;
    cout << q <<endl; //3
    cout << j <<endl; //19
    cout << k <<endl; //24
    cout << m <<endl; //39
    // ****************************** 
    return 0;
}