#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> n;
    for (int i = 1; i <= 5; i++)
    {
        n.push_back(i);
    }
    cout << "\nThe elements of vector" << endl;
    for (auto i = n.begin(); i < n.end(); i++)
    {
        cout << *i << endl;
    }
}