#include <iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter a number : "<<endl;
     cin>>n;
     int sum;
     while (n!=0)
     {
        int ld= n%10;
        n=n/10;
        //sum=sum+ld;
        sum+=ld;
     }
     cout<<sum;
return 0;
}