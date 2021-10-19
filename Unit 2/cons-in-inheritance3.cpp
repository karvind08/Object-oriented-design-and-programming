#include <iostream>
using namespace std;

class Example
{
    int a, b;

public:
    Example(int x, int y)
    {
        cout << "\nParametrized constructor of Base class\n";
        a = x;
        b = y;
        cout << a << " " << b << endl;
    }
};

class Sample : public Example
{
    int c, d;

public:
    Sample(int x, int y) : Example(x, y)
    {
        cout << "\nParametrized constructor of Derived class\n";
        c = x;
        d = y;
        cout << c << " " << d << endl;
    }
};

int main()
{

    Sample S1(100, 200);
}