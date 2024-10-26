#include <iostream>
using namespace std;
int main(){
    class Complex{
        int a;
        int b;
        public:
        void setData(int v1 , int v2){
            a=v1;
            b=v2;
        }
        void setDatabySum(Complex o1 , Complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void printNumber(){
            cout<<"Your Complex Number is "<<a<<"+"<<b<<"i"<<endl;
        }
     };
Complex c1 , c2 , c3;
c1.setData(2 , 4);
c2.setData(3 , 1);
cout<<"The Sum of Complex Number is as Follows : "<<endl;
c3.setDatabySum(c1,c2);
c3.printNumber();

return 0;
}