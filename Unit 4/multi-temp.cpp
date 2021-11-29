#include <iostream>
//#include <string>
using namespace std;
template <class T1, class T2>
void display(T1 x, T2 y)
{
    cout << x << " " << y << "\n";
}
int main()
{
    display(10, "arvind");
    display(23.1, 54);
    return (0);
}