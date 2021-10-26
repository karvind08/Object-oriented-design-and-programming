#include <iostream>
using namespace std;
class Example
{
public:
    Example()
    {
        cout << "Default constructor in class Example" << endl;
    }
};

class Sample : public Example
{
public:
    Sample()
    {
        cout << "Default constructor in class Sample" << endl;
    }
};
int main()
{
    Sample S;
}