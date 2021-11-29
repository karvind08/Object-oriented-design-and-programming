#include <iostream>
using namespace std;
template <class T>
void display(T x)
{
    cout << "Template display: " << x << "\n";
}
void display(int x)
{
    cout << "explicit display: " << x << "\n";
}
int main()
{
    display(100);
    display(15.23);
    display("Arvind");
    return (0);
}