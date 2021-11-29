#include <iostream>
using namespace std;
template <class X, class Y>
Y sum(X a, Y b)
{
    return (a + b);
}

int main()
{
    cout << sum(5, 6.54);
}
