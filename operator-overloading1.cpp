#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The a: " << a << " "
             << " and b: " << b << "\n";
    }
    Example operator+(Example);
};

Example Example::operator+(Example e)
{
    Example e1;
    e1.a = a + e.a;
    e1.b = a + e.b;
    return (e1);
}
int main()
{
    Example E1, E2, E3;
    E1.getdata(10, 20);
    E1.display();
    E2.getdata(100, 200);
    E2.display();
    E3 = E1 + E2;
    E3.display();
}