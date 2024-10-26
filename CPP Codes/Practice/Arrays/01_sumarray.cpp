#include <iostream>
using namespace std;
int main(){
    int arr[]={12,14,1,8,9 ,56, 55, 54 , 54 , 5};
    cout<<"Size of "<<sizeof(arr)<<endl;
    int n = sizeof(arr)/4;
    int sum=0;
    for (int i = 0; i <=(n-1); i++)
    {
        //sum=sum+arr[i];
        sum+=arr[i];
        
    }
    cout<<sum;
return 0;
}