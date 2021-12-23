#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
void myfunction(int i)
{
    cout << ' ' << i * i;
}
int main()
{
    vector<int> V = {1, 2, 3, 4, 5};
    vector<int>::iterator i;
    cout << "Using vector\n";
    for_each(V.begin(), V.end(), myfunction);
    return (0);
}