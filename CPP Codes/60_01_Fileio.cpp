#include <iostream>
#include <fstream>
/*
The useful classes for working with files in C++ are :
1.fstream
2.ifstream --> Derived From fstream
3.ofstream --> Derived From fstream
*/
//In order to work with files in C++ , you will have to open it. Primally , there are two ways to open a file : 
// 1. Using the Constructor
// 2. Using the member function open() of the class
using namespace std;
int main(){
    string st="Rohit R Pokalwar";
    string s2;
    //Opening files using constructor and reading it
    // ofstream out("sample.txt"); //write Operations
    // out<<st;
    ifstream in("Sample60.txt"); //Read Operations
    //in>>s2;
    getline(in , s2);
    cout<<s2;
return 0;
}