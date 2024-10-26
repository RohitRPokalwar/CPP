#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("Sample60.txt");
    out<<"This Is Sample Text Taken"<<endl;
    out<<"This Is Sample Taken"<<endl;
    out.close();
    ifstream in;
    string st;
    in.open("Sample60.txt");
    in>>st;
    cout<<st;
    in.close();
return 0;
}