#include <iostream>
using namespace std;
int main(){
    int arr[]={4,5,3,6,98};
    int a, mx=arr[0];
    for (int  i = 0; i < 5; i++)
    {
        //Method 1
        if(arr[i]>mx) mx=arr[i];
        //Method 2
        a= max(mx , arr[i]);
    }
    cout<<mx<<endl; //cout<<a;
    int ar[]={-10,-15,-9};
    int q, m=INT_MIN;  //m is min value
    for (int  i = 0; i < 3; i++)
    {
        //Method 1
        if(ar[i]>m) m=ar[i];
        //Method 2
        q= max(m , ar[i]);
    }
    cout<<m; //cout<<a;

return 0;
}