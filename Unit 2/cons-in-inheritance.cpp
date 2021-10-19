#include <iostream>
using namespace std;

class Example
{
    int a, b;

public:
    Example()
    {
        cout << "\nDefault constructor of Base class";
    }
};

class Sample : public Example
{
public:
    Sample()
    {
        cout << "\nDefault constructor of Derived class";
    }
};

int main()
{
    Sample S;
}