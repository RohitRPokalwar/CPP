#include <iostream>
using namespace std;
template <class T1=int , class T2=float , class T3=char>
class Rohit{
    public:
    T1 a;
    T2 b;
    T3 c;
    Rohit(T1 x , T2 y , T3 p){
        a=x;
        b=y;
        c=p;
    }
    void Display(){
        cout<<"The Value of a is "<<a<<endl;
        cout<<"The Value of b is "<<b<<endl;
        cout<<"The Value of c is "<<c<<endl;
    }
};
int main(){
    Rohit<> R(2 , 8.6 , 'c');
    R.Display();
    Rohit<float , char , char> g(1.4 , 'o', 'c');
    g.Display();
return 0;
}