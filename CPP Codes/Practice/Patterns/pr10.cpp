#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Number Of Rows and Columns"<<endl;
    cin>>m;
    int a=1;
    for (int i = 1; i <=m; i++)
    {
        for (int y = 1; y <=i; y++)
        {
            cout<<" "<<a;
            a++;
        } 
        cout<<endl;
    }
    return 0;
}
