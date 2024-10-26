#include <iostream>
using namespace std;
class base1{
    public :
    void Greet(){
        cout<<"How are You?"<<endl;
    }
};
class base2{
    public :
    void Greet(){
        cout<<"Kaise ho ?"<<endl;
    }
};
class derived : public base1 , public base2{
public:
void Greet(){
    base1::Greet();
    base2::Greet();
}
};
class B{
public :
void say(){
    cout<<"How Are You?"<<endl;
}
};
class D : public B{
    // D's new say() method will override base class's say() method
    public:
void say(){
    cout<<"Kaise Ho?"<<endl;
}
};
int main(){
    //Ambiguity 1
    // base1 obj1;
    // base2 obj2;
    // obj1.Greet();
    // obj2.Greet();
    // derived d;
    // d.Greet();
    
    // Ambiguity 2
    B b;
    b.say();
    D hgbhg;
    hgbhg.say();

return 0;
}