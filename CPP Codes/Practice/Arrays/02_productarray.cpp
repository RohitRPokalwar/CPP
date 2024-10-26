#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,8,9,22};
    int n=sizeof(arr)/4;
    int p=1;
    for (int i = 0; i < n; i++) 
    {
        p=p*arr[i];
    }
    cout<<p;
return 0;
}