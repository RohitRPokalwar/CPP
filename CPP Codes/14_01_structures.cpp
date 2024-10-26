#include <iostream>
using namespace std;
typedef struct employee
{
  int eid;
  char favchar;
  float salary;
}ep;

int main()
{
    // Hamesha Struct employee nahi likhna ho toh typedef use
      ep rohit;
    struct employee harry;
    struct employee rohan;
  
rohit.eid=12;
rohit.favchar= 'c';
rohit.salary=1500000;
cout<<"The Value is "<< rohit.eid<<endl;
cout<<"The Value is "<< rohit.favchar<<endl;
cout<<"The Value is "<< rohit.salary<<endl;
    return 0;
}

