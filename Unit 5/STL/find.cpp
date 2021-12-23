#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    vector<int> arr{1, 2, 3, 8, 4, 3};
    vector<int>::iterator it, j;
    int el;
    cout << "Enter the element: ";
    cin >> el;
    j = arr.begin();
    cout << *j << " "
         << "\n";
    it = find(arr.begin(), arr.end(), el);
    if (it != arr.end())
        cout << el << " is at position: " << it - arr.begin() << endl;
    else
        cout << el << "not found";

    return 0;
}