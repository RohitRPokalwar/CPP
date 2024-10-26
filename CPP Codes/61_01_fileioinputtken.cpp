#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //Connecting our file with hout stream
    ofstream hout("Sample60.txt");
    cout<<"Enter your Name "<<endl;
    string name, RollNo;
    cin>>name;
    cout<<"Enter your Roll No. "<<endl;
    cin>>RollNo;
    hout<<"Your Name is " + name<<endl;
    hout<<"Your RollNo is " + RollNo<<endl;
    // hout.close();
    ifstream hin("Sample60.txt");
    string content;
    // hin>>content;
    getline(hin , content );
    cout<<"The Content of File is : "<<content;
return 0;
}