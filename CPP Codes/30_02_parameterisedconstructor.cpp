#include <iostream>
using namespace std;
class point{
    int x , y;
    public:
 point(int a , int b);
 void pointprint(){
    cout<<"The Point is ("<<x <<","<<y<<")"<<endl;
 }
};
point ::point(int a, int b){
    x=a;
    y=b;
}
int main(){
    point c1(2,4);
    c1.pointprint();
    point c2(4,8);
    c2.pointprint();

    
return 0;
}
