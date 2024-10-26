#include <iostream>
using namespace std;

int swapbypointer(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return 0;
}
int main()
{
    int a = 4, b = 5;
    swapbypointer(a, b);
    cout << "The Swap number of a and b is " << a <<" and "<< b << endl;

    return 0;
}
