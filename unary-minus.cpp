#include <iostream>
using namespace std;
class Unary
{
    int a;

public:
    void getdata(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "The a is: " << a << "\n";
    }
    Unary operator-()
    {
        Unary U;
        U.a = -a;
        return (U);
    }
};

int main()
{
    Unary U1, U2;
    U1.getdata(2);
    U1.display();
    U2 = -U1;
    U2.display();
}