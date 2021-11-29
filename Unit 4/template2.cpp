#include <iostream>
using namespace std;
int big(int a, int b)
{
    if (a > b)
        return (a);
    else
        return (b);
}
double big(double a, double b)
{
    if (a > b)
        return (a);
    else
        return (b);
}
int main()
{
    cout << big(5.3, 6.1);
}
