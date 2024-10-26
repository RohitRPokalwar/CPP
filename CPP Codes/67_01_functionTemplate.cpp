#include <iostream>
using namespace std;
float funcAverage(int a , int b){
    float Avg=(a+b)/2.0;
    return Avg;
}
template <class T1 , class T2>
float funcAverage2(T1 a , T2 b){
    float Avg=(a+b)/2.0;
    return Avg;
}
template <class T>
void swapp(T &a , T &b){
    T temp = a;
    a=b;
    b=temp;
}
int main(){
    float a;
    a=funcAverage(3 ,8);
    printf("The Average of these number is %.3f \n" ,a);
    a=funcAverage2(3 ,6.5);
    printf("The Average of these number is %.3f \n" ,a);
    int x= 5 , y = 8;
    cout<<x<<endl<<y;
    return 0;
}