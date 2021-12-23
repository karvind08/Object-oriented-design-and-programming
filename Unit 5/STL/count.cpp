#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    vector<int> v = {1, 3, 3, 3, 3};
    int n;
    n = count(v.begin(), v.end(), 5);
    cout << "Number 3 occurs " << n << " times." << endl;
    return 0;
}