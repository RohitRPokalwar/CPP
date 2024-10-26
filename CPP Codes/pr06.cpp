#include <iostream>
using namespace std;
int main(){
    float itemprice , sellingprice;
    cout<<"Enter Item Price"<<endl;
    cin>>itemprice;
     cout<<"Enter Selling Price of Item"<<endl;
    cin>>sellingprice;

    if (itemprice<sellingprice)
    {
       cout<<"Seller made a Profit"<<endl;
       cout<<"Profit Rs is : "<<sellingprice-itemprice;
    }
    else if(itemprice>sellingprice){
        cout<<"Seller made a Loss"<<endl;
       cout<<"Loss Rs is : "<<itemprice-sellingprice;
    }
    else
    {
        cout<<"Equal Price"<<endl;
    }
    return 0;
}