#include <iostream>
using namespace std;
int main(){
    float d=34.4F;
    long double e=34.4L;
     cout<<"The Value of d is "<<d<<endl<<"The Value of e is "<<e<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;   //It takes as double      
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl; // It takes as float
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl; // It takes as float
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl; //It takes as long double
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl; //It takes as long double    
return 0;
}