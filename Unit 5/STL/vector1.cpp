#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator i;
    cout << v[1] << endl;
    for (i = v.begin(); i < v.end(); i++)
    {
        cout << *i << " ";
    }
    for (i = v.begin(); i < v.end(); i++)
    {
        if (*i % 2 == 0)
        {
            v.erase(i);
            i--;
        }
    }
    cout << "\nOdd elements:" << endl;
    for (i = v.begin(); i < v.end(); i++)
    {
        cout << *i << " ";
    }
}