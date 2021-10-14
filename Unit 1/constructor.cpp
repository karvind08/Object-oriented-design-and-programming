#include <iostream>
using namespace std;

class Example
{
public:
    Example();
};

Example::Example()
{
    cout << "\n Constructor";
}

int main()
{
    Example E1, E2, E3;
}