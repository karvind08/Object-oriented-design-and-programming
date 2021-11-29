#include <iostream>
using namespace std;
template <class X>
X big(X a, X b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

int main()
{
    cout << big(5.12, 6.54);
    cout << "\n"
         << big(10, 20);
}
