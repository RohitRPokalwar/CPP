#include <iostream>
using namespace std;
/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS (ONE , TWO OR MORE THAN TWO)
template<class T1 , class T2 ....(COMMA SEPRATED)>
class nameofClass{
//body
}   
*/
template<class T1 , class T2>
class Myclass{
public :
    T1 data1;
    T2 data2;
    Myclass(T1 a , T2 b){
        data1=a;
        data2=b;
    }
    void Display(){
        cout<<this->data1<<endl<<this->data2;
    }
};
int main(){
    Myclass<int, float> obj(1,9.9);
    obj.Display();
return 0;
}