#include <iostream>
using namespace std;
void Swapnumbers(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x = 99;
    int y = 100;
    cout << x << " " << y << endl;
    Swapnumbers(x, y);
    cout << x << " " << y;

    return 0;
}