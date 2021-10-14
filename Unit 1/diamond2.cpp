#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void f1()
    {
        cout << "F1\n";
    }
};

class B1 : public A
{
public:
    int b1;
    void f2()
    {
        cout << "F2\n";
    }
};
class B2 : public A
{
public:
    int b2;
    void f3()
    {
        cout << "F3\n";
    }
};
class C : public B1, public B2
{
public:
    int c;
    void f4()
    {
        cout << "F4\n";
    }
};
int main()
{
    C obj;
    obj.f4();
    obj.f3();
    obj.f2();
    // obj.f1();
}