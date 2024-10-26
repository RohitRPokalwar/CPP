#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream out;
    string st;
    out.open("Sample60.txt");
    while (out.eof()==0)
    {
        getline(out , st);
        cout<<st<<endl;
    }
    

return 0;
}