#include <iostream>
using namespace std;
int main(){
     int arr[]={4,5,3,6,98};
    int a, mx=INT_MIN;
    for (int  i = 0; i < 5; i++)
    {   //Method 1
        if(arr[i]>mx) mx=arr[i];
    }
    int smax = INT_MIN;
    for (int  i = 0; i < 5; i++)
    {
        if(arr[i]!=mx) smax=max(smax , arr[i]);
    }
    cout<<smax<<endl; //cout<<a;
return 0;
}