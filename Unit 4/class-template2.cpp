#include <iostream>
using namespace std;
template <class T1, class T2>
class Example
{
    T1 a;
    T2 b;

public:
    void getdata(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << "\n";
    }
};
int main()
{
    Example<int, float> E4;
    E4.getdata(10, 23.5);
    E4.display();

    Example<int, string> E5;
    E5.getdata(10, "Arvind");
    E5.display();
}