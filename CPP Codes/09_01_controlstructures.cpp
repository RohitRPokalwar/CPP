#include <iostream>
using namespace std;
int main(){
     int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;

    if((age<18) && (age>0)){
        cout<<"Your age is from 1 to 17"<<endl;
    }
    else if(age==18){
        cout<<"Your age is 18"<<endl;
    }
    else if(age<1){
        cout<<"Your age is in Months"<<endl;
    }
    else{
        cout<<"Check You have"<<endl;
    }
return 0;
}