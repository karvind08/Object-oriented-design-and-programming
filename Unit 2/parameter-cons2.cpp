#include <iostream>
using namespace std;

class Father
{
protected:
    int height;

public:
    Father(int h)
    {
        cout << "Parameterized constructor of base class" << endl;
        height = h;
    }
};

class Child : public Father
{
public:
    Child(int x) : Father(x)
    {
        cout << "Child Class Constructor " << endl;
    }
    void display()
    {
        cout << "The height: " << height << endl;
    }
};

int main()
{
    Child C1(10);
    C1.display();
}