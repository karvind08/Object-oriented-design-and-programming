#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void even(int n)
{
    if (n % 2 == 0)
        cout << n << ' ';
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Even numbers from vector v: " << endl;
    for_each(v.begin(), v.end(), even);
    return 0;
}