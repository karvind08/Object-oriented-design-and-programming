#include <iostream>
using namespace std;
template <class T>
class Example
{
    T a, b;

public:
    void getdata(T, T);
    void display();
};
template <class T>
void Example<T>::getdata(T x, T y)
{
    a = x;
    b = y;
}

void Example<>::display()
{
    cout << a << b;
}
int main()
{
    Example<int> E1;
    E1.getdata(10, 20);
    E1.display();
}