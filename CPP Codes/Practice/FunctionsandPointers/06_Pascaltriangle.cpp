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
int ncr(int n , int r){
  return (Factorial(n) / (Factorial(r) *Factorial(n-r) ));
}
int main()
{
    int m;
    cin>>m;
    for (int i = 0; i <=m; i++)
    {
        for (int x = 0; x <= m -i-1; x++)
        {
            cout<<"   ";
        }
        
        for (int j = 0; j <=i; j++)
        {
            cout<< "    " <<ncr(i , j);
        }
        cout<<endl;
    }
    
    return 0;
}
