#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> n;
    n.assign(9, 1);
    cout << "The content are: " << endl;
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    n.push_back(2);
    int size = n.size();
    cout << "\n Last Element: " << n.back();
    n.pop_back();
    cout << "\nNow the content are: ";
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    n.insert(n.begin(), 7);

    cout << "\nNow the content are: ";
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    // cout << "\n First Element: " << n.begin() << endl;
    n.clear();
    cout << "\nThe size: " << n.size();
}