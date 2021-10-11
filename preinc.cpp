#include <iostream>
using namespace std;
class Unary1
{
    int a;

public:
    void getdata(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "The value of a: " << a << endl;
    }
    Unary1 operator++()
    {
        Unary1 U;
        U.a = ++a;
        return (U);
    }

    Unary1 operator++(int)
    {
        Unary1 U;
        U.a = a++;
        return (U);
    }
};

int main()
{
    Unary1 U1, U2, U3;
    U1.getdata(5);
    U1.display();
    U2 = ++U1;
    U2.display();
    U3 = U1++;
    U3.display();
}