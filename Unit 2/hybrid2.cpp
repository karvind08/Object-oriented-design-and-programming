#include <iostream>
using namespace std;
class A
{
public:
    void display1()
    {
        cout << "display function from class A\n";
    }
};

class B1 : virtual public A
{
public:
    void display2()
    {
        cout << "display function from class B1\n";
    }
};
class B2 : virtual public A
{
public:
    void display3()
    {
        cout << "display function from class B2\n";
    }
};

class C : public B1, public B2
{
public:
    void display4()
    {
        cout << "display function from class C\n";
    }
};

int main()
{
    C C1;
    C1.display1();
    C1.display2();
    C1.display3();
    C1.display4();
    cout << sizeof(C1);
}