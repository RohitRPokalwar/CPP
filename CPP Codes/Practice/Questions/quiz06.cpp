#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = true; // True means Prime
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false; // false means Composite
            break;
        }
    }
    if(n==1) {
        cout<<"Neither Prime Nor Composite";
    }
    else if (flag==true)
    {
        cout<<"The number "<<n<<" is Prime";
    }
    else cout<<"The number "<<n<<" is Composite";
    

    return 0;
}