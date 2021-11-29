#include <iostream>
using namespace std;

class Example
{
    int a, b;

public:
    // Example()
    // {
    //     cout << "\nDefault constructor of Base class";
    // }
    Example(int x, int y)
    {
        cout << "\nParametrized constructor of Base class";
        a = x;
        b = y;
    }
    // void display()
    // {
    //     cout << a << " " << b << endl;
    // }
};

class Sample : public Example
{
    int c, d;

public:
    Sample(int x, int y)
    {
        cout << "\nParametrized constructor of Derived class\n";
        c = x;
        d = y;
    }
    // void show()
    // {
    //     cout << c << " " << d << endl;
    // }
};

int main()
{
    Sample S(10, 20);
    //S.show();
}