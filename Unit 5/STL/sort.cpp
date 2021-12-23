#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    vector<int> v = {1, 13, 4, 15, 70, 8};
    vector<int>::iterator i;
    sort(v.begin(), v.end());
    cout << "\nAfter Sorting: \n";
    for (i = v.begin(); i < v.end(); i++)
    {
        cout << *i << " ";
    }
}
