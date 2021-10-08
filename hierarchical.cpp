#include <iostream>
using namespace std;
class A
{
protected:
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
};

class B : public A
{
public:
    void sum()
    {
        int s = a + b;
        cout << s << endl;
    }
};

class C : public A
{
public:
    void sub()
    {
        int s1 = a - b;
        cout << s1 << endl;
    }
};

int main()
{
    C obj1;
    obj1.getdata(10, 20);
    obj1.sub();
    B obj2;
    obj2.getdata(100, 200);
    obj2.sum();
}