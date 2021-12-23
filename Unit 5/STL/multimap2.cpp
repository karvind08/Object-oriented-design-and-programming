#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    multimap<int, int> M; // empty multimap container

    // insert elements in random order
    M.insert(pair<int, int>(1, 40));
    M.insert(pair<int, int>(2, 30));
    M.insert(pair<int, int>(3, 60));
    M.insert(pair<int, int>(6, 50));
    M.insert(pair<int, int>(6, 10));

    // printing multimap gquiz1
    multimap<int, int>::iterator itr;
    cout << "\nThe multimap M is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = M.begin(); itr != M.end(); ++itr)
    {
        cout << "\t" << itr->first;
        cout << "\t" << itr->second << '\n';
    }

    M.insert(pair<int, int>(4, 50));
    M.insert(pair<int, int>(5, 10));
    cout << "\nThe multimap M is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = M.begin(); itr != M.end(); ++itr)
    {
        cout << "\t" << itr->first;
        cout << "\t" << itr->second << '\n';
    }

    return 0;
}
