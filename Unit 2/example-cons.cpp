#include <iostream>
using namespace std;

class Example
{
    int a, b;

public:
    Example(int x, int y)
    {
        cout << "Base class";
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};

class Sample : public Example
{
public:
    Sample(int m, int n) : Example(m, n)
    {
        cout << "\nDerived class";
    }
};

int main()
{
    Sample S(10, 20);
    S.display();
}