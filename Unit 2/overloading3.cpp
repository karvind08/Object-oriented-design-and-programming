#include <iostream>
using namespace std;
class A
{
public:
    void f1(int x)
    {
        cout << "f1 from A" << endl;
        cout << x << endl;
    }
};

class B : public A
{
public:
    void f1(float y)
    {
        cout << "f1 from B" << endl;
        cout << y << endl;
    }
};

int main()
{
    B obj;
    obj.f1(2);
}