#include <iostream>
using namespace std;
//template <class T>
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void fun(int x1, int y1, float a1, float b1)
{
    cout << " x1 and y1 before swapping: " << x1 << " " << y1 << endl;
    swap(x1, y1);
    cout << " x1 and y1 after swapping: " << x1 << " " << y1 << endl;

    cout << " a1 and b1 before swapping: " << a1 << " " << b1 << endl;
    swap(a1, b1);
    cout << " a1 and b1 after swapping: " << a1 << " " << b1 << endl;
}

int main()
{
    fun(10, 20, 2.2, 3.3);
    return (0);
}