#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int a1[] = {1, 2, 3};
    int a2[] = {4, 5, 6};
    int res[3];
    transform(a1, a1 + 3, a2, res, plus<int>());
    cout<<"\nThe sum of elements\n";
    for (int i = 0; i < 3; i++)
        cout << res[i] << " ";
}