#include <iostream>
#include <algorithm>
using namespace std;
int increment(int x)
{
    x = x + 1;
    return x;
}
int main()
{
    int a[] = {3, 6, 8, 13, 2};
    int r[5];
    cout << "\nThe array a: ";
    for (int i = 0; i < 5; i++)
    {
        cout << ' ' << a[i];
    }
    cout << '\n';
    transform(a, a + 5, r, increment);
    cout << "The array r : ";
    for (int i = 0; i < 5; i++)
    {
        cout << ' ' << r[i];
    }
    cout << '\n';
    return 0;
}