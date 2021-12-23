#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    vector<int> v = {1, 3, 4, 5, 7, 8};
    vector<int>::iterator i;
    int n;
    cout << "\nEnter the number:";
    cin >> n;
    i = find(v.begin(), v.end(), n);
    if (i != v.end())
        cout << n << " is found at index " << i - v.begin() << endl;
    else
        cout << n << " is not found" << endl;
}
