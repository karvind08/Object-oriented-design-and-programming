#include <iostream>
using namespace std;
class A
{
public:
    void f1()
    {
        cout << "The function 1 from class A";
    }
    void f2()
    {
        cout << "The function 2 from class A";
    }
};

class B : public A
{
public:
    void f1() // method overriding
    {
        cout << "The function 1 from class B";
    }
    void f2(int x) // method hiding
    {
        cout << "\nThe function 2 from class B";
        cout << "\nThe value of x" << x;
    }
};

int main()
{
    B obj;
    obj.f1();
    obj.A::f1();
    //A::f1();
}
