#include <iostream>
using namespace std;
int main(){
    int m , n;
    cout<<"Enter Number of Rows : ";
    cin>>m;
    cout<<"Enter Number of Column : ";
    cin>>n;
    for (int x = 0; x <=m; x++)
    {
        for (int y = 0; y <=n; y++)
        {
            if (m%m==0 || m%m==0 || n/n==1 || n%n==0)
            {
                cout<<"* ";
            }
            
            else
            {
                cout<<"  . ";
            }
        }
        cout<<endl;
    }
    
return 0;
}