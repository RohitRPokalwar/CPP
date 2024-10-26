#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j=1; j <=n-i+1; j++) //We can write this formula by i+j=n+1
        {                              //i+j(Max Value)=n+1
            cout<<"* ";                //j(Max Value)=n+1-i
        }                              //j<=n+1-i
        cout<<endl;
    }
    
return 0;
}
