#include <iostream>
using namespace std;

class Sum
{
    int a, b;

public:
    Sum(int, int);
};

Sum::Sum(int x, int y)
{
    int s = x + y;
    cout << s << endl;
}

int main()
{
    Sum S = Sum(10, 20);
}