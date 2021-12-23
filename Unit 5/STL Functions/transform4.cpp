#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> V1 = {1, 2, 3, 4, 5};
    vector<int> V2 = {10, 20, 30, 40, 50};
    vector<int>::iterator i;
    transform(V1.begin(), V1.end(), V2.begin(), V1.begin(), plus<int>());
    cout << "\nThe sum of elements\n";
    for (i = V1.begin(); i != V1.end(); i++)
    {
        cout << *i << " ";
    }
}