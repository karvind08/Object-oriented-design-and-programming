#include <iostream>
using namespace std;
template <class T>
T sum(T a[], int size)
{
    T s = 0;
    for (int i = 0; i < size; i++)
        s = s + a[i];
    return (s);
}
int main()
{
    int x[] = {10, 20, 30, 40, 50};
    float y[] = {1.1, 2.2, 3.3};
    int s1 = sum(x, 5);
    cout << s1 << endl;
    float s2 = sum(y, 3);
    cout << s2 << endl;
}