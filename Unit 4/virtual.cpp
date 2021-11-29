#include <iostream>
using namespace std;
class A
{
public:
    virtual void cat()
    {
        cout << "Meow" << endl;
    }
    void dog()
    {
        cout << "Wuff" << endl;
    }
};

class B : public A
{
public:
    void cat()
    {
        cout << "Meow in B" << endl;
    }
    void dog()
    {
        cout << "Wuff in B" << endl;
    }
};
int main()
{
    // B B1;
    // B1.cat();
    // B1.dog();
    A *P, A1;
    // P = &A1;
    // P->cat();
    // P->dog();
    B B2;
    P = &B2;
    P->cat();
    P->dog();
}