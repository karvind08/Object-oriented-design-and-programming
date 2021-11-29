#include <iostream>
using namespace std;
template <class T>
void swap(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
    cout << "number after swapping:" << a << " " << b << "\n";
}

int main()
{
    swap(10, 20);
    swap(10.2, 2.3);
    return (0);
}