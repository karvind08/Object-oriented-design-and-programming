#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> L = {11, 2, 2, 3, 4, 7, 7};
    list<int>::iterator i;
    L.unique();
    for (i = L.begin(); i != L.end(); i++)
    {
        cout << *i << " ";
    }
}