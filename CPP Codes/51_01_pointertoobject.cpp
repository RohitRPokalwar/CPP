#include <iostream>
using namespace std;
class Complex{
    int real , imaginary;
    public : 
    void set_Data(int a , int b){
        real=a;
        imaginary=b;
    }
    void getData(){
        cout<<"The Real part is "<<real<<endl;
        cout<<"The Imaginary Part is "<<imaginary<<endl;
    }
};
int main(){
    /*  Method 1
    Complex C1;
    C1.set_Data(25 , 35);
    C1.getData();
    */
   /*   Method2
   Complex C1;
   Complex* ptr=&C1;
   (*ptr).set_Data(2 , 88);
   (*ptr).getData();
   */
  //Method 3
  Complex *ptr = new Complex;
   (*ptr).set_Data(2 , 88);
   (*ptr).getData();
    //Method 4
    Complex *ptr1 = new Complex[4];
     ptr1->set_Data(2,88);
     ptr1->getData();

return 0;
}