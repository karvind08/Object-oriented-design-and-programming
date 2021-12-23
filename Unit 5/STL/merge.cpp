#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    vector<int> v1 = {1, 4, 7};
    vector<int> v2 = {2, 6, 8};
    vector<int> v3(6);
    vector<int>::iterator i;
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    cout << "\nAfter merging: \n";
    for (i = v3.begin(); i < v3.end(); i++)
    {
        cout << *i << " ";
    }
}
