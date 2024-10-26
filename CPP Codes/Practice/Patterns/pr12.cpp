#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Number Of Rows and Columns"<<endl;
    cin>>m;
    for (int i = 1; i <=m; i++)
    {
        for (int y = 1; y <=m; y++)
        {
            if (y==m/2+1 || i==m/2+1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        } 
        cout<<endl;
    }
    return 0;
}
