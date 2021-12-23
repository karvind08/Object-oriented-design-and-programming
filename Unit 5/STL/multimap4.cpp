#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> M;
    M.insert(pair<int, int>(1, 40));
    M.insert(pair<int, int>(2, 30));
    M.insert(pair<int, int>(3, 60));
    M.insert(pair<int, int>(6, 50));
    M.insert(pair<int, int>(6, 10));
    multimap<int, int>::iterator itr;
    cout << "\nThe multimap M is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = M.begin(); itr != M.end(); ++itr)
    {
        cout << "\t" << itr->first;
        cout << "\t" << itr->second << '\n';
    }
    M.erase(M.begin(), M.find(3));
    cout << "\nThe M after removal of elements less than key=3 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = M.begin(); itr != M.end(); ++itr)
    {
        cout << "\t" << itr->first;
        cout << "\t" << itr->second << '\n';
    }

    return 0;
}
