#include <iostream>
using namespace std;

class Example
{
    int a, b;

public:
    Example()
    {
    }
    Example(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << b << endl;
    }
    void operator=(Example &e)
    {
        a = e.a;
        b = e.b;
    }
};

int main()
{
    Example E1(10, 20);
    Example E2;
    E2 = E1;
    E2.display();
}