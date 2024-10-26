#include <iostream>
using namespace std;
class Number{
int a;
public : 
Number(){  
    a=0;
}
Number(int num){
    a=num;  
}
//When no copy constructor is found then compiler supplies its own constructor
//Ye Likhe toh ata nahi toh bhi Compiler supply kar deta hai
Number(Number &obj){
    cout<<"Copy Constructor called!!!"<<endl;
    a=obj.a;    
}
void display(){
    cout<<"The number of the object is "<<a<<endl;
}
};
int main(){
    Number x , y ,z(45);
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();
    Number z2(y);
    z2.display();
    Number z3(z);
    z3.display();

    //z1 should exactly resemble z or x or y
return 0;
}
//NOTE 
/* Number z1(z); // Copy Constructor is invoked
z1.display();

z2 = z; \\copy constructor not called

Number z3=z; //Copy constructor invoked
*/