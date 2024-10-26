#include <iostream>
using namespace std;
int main()
{
    int arr[]={8,75,6,52,522};
    int n=sizeof(arr)/4;
    int mi=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<mi) mi=arr[i];
    }
    cout<<mi;
    return 0;
}