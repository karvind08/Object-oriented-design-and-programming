#include <iostream>
using namespace std;

class Father
{
    int height;

public:
    Father(int h)
    {
        cout << "Parameterized constructor of base class" << endl;
        height = h;
        cout << "The height:" << height;
    }
};

class Child : public Father
{
public:
    Child(int x) : Father(x)
    {
    }
};

int main()
{
    Child C1(10);
}