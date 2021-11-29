#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example()
    {
        cout << "Default constructor in class Example" << endl;
    }
    Example(int x, int y)
    {
        cout << "parametrized constructor in class Example" << endl;
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
    int m, n;

public:
    Sample()
    {
        cout << "Default constructor in class Sample" << endl;
    }
    Sample(int x1, int y1)
    {
        cout << "parametrized constructor in class Sample" << endl;
        m = x1;
        n = y1;
    }
    void show()
    {
        cout << m << " " << n << endl;
    }
};
int main()
{
    //Sample S;
    Sample S1(10, 20);
    S1.show();
}