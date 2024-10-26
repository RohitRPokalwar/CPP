#include <iostream>
using namespace std;
void q(){
   cout<<"Good Morning"<<endl;
    cout<<"Good Afternoon"<<endl;
    
}
void greet(){
     cout<<"Welcome"<<endl;
     q();    //Multiple Function
}
int main(){
    cout<<"Hii"<<endl;
    greet();
return 0;
}