#include <iostream>
using namespace std;
template <class T>
class Rohit
{
public:
    T data;
    Rohit(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Rohit<T>::display()
{
    cout << data << endl;
}
void func(int a)
{
    cout << "I am First func() " << a << endl;
}
template <class T>
void func1(T a)
{
    cout << "I am Templated func() " << a << endl;
}
int main()
{
    // Rohit<int> h(5);
    // cout << h.data << endl;
    // h.display();
    // Rohit<float> g(5.97);
    // cout << g.data << endl;
    func(4); //Exact match takes the highest priority
    func1(4);
    return 0;
}