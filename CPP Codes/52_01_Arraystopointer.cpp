#include <iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;
    public: 
    void set_Data(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "The Id of Packet is " << id << endl;
        cout << "The Price of Packet is " << price << endl;
    }
};
int main()
{
    int size = 2;
    int p , i;
    float q;
    // int *ptr =&size;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp =ptr;
    for ( i = 1; i <=size; i++)
    {
        cout<<"Enter Id and Price of item "<<i<<endl;
        cin>>p>>q;
        // (*ptr).set_Data(p,q);
        ptr->set_Data(p,q);

    ptr++;
    }  
    for ( i = 1; i <=size; i++)
    {
        cout<<"Item number : "<<i<<endl;
        ptrTemp->getdata();
    }
    return 0;
}