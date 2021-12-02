#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;                 // empty map container
    m.insert(pair<int, int>(1, 40)); // insert elements in random order
    m.insert(pair<int, int>(2, 30));
    m.insert(pair<int, int>(3, 60));
    m.insert(pair<int, int>(4, 20));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(6, 50));
    m.insert(pair<int, int>(7, 10));

    // printing map gquiz1
    map<int, int>::iterator it;
    cout << "\nThe map m is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << '\t' << it->first
             << '\t' << it->second << '\n';
    }
    return 0;
}
