#include <iostream>
using namespace std;
//Ek hi function baar used hona use function overloading
int volume ( int r , int h ){
    return 3.14*r*r*h;
}
int volume (int r){
    return r*r*r;
}
int volume (int r , int h , int m){
return r*h*m;
}
int main(){
    cout<<"The volume of cuboid is "<<volume(2,5)<<endl;
    cout<<"The volume of cube is "<<volume(5)<<endl;
    cout<<"The volume is "<<volume(8,9 ,6)<<endl;
return 0;
}