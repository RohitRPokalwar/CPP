#include <iostream>
using namespace std;
int Factorial(int x){
    int f=1;
    for (int i = 1; i <=x; i++)
    {
       f *=i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int r;
    cout<<"Enter r"<<endl;
    cin>>r;
   int  Com;
   Com = (Factorial(n) / Factorial(n-r) );
   cout<<"The Value of "<<n<<" P "<<r<<" is "<<Com;

    
return 0;
}