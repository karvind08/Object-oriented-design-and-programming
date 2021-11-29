#include <iostream>
using namespace std;
template <class T, int n>
class Example
{
    T a[5];

public:
    Example(T b[])
    {
        for (int i = 0; i < n; i++)
        {
            a[i] = b[i];
        }
    }
    void sum()
    {
        T s = 0;
        for (int i = 0; i < n; i++)
        {
            s = s + a[i];
        }
        cout << s << endl;
    }
};

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    Example<int, 5> E1(arr);
    E1.sum();
}