#include <iostream>
#include <vector>
using namespace std;
void Display(vector <int> &v){
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main(){
    int element , size;
    vector<int> v1;
    cout<<"Enter a Size";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector";
        cin>>element;
        v1.push_back(element);
    }
    v1.pop_back();
    Display(v1);
return 0;
}