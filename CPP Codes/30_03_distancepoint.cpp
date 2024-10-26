#include <iostream>
#include <math.h>
using namespace std;
class point{
    int x , y;
    friend void pointdistance(point o1 ,point o2 );
    public:
 point(int a , int b);
 void pointprint(){
    cout<<"The Point is ("<<x <<","<<y<<")"<<endl;
 }
 
};
void pointdistance(point p1,point p2){
    float dist;
    dist=sqrt(pow(p1.x-p2.x ,2)+pow(p1.y-p2.y ,2));
    cout<<"The Distance is "<<dist<<endl;
 }
point ::point(int a, int b){
    x=a;
    y=b;
}
int main(){
    point p1(2,4);
    p1.pointprint();
    point p2(4,8);
    p2.pointprint();
    pointdistance(p1 , p2);
return 0;
}