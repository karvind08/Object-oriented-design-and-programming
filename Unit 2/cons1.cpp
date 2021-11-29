#include <iostream>
using namespace std;
class Example
{
public:
    Example()
    {
        cout << "Base class" << endl;
    }
};
class Sample : public Example
{
public:
    void display()
    {
        cout << "Display function from Sample" << endl;
    }
};

int main()
{
    Sample S;
    S.display();
}