#include <iostream>
using namespace std;
#include <map>

int main()
{
    multimap<int, int> mp;
    multimap<int, int>::iterator itr;
    mp.insert({2, 30});
    mp.insert({1, 40});
    mp.insert({2, 60});
    mp.insert({3, 20});
    mp.insert({1, 50});
    mp.insert({4, 50});
    cout << "\nThe multimap M is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = mp.begin(); itr != mp.end(); ++itr)
    {
        cout << "\t" << itr->first;
        cout << "\t" << itr->second << '\n';
    }
    cout << "The elements from position 3 in multimap are : \n";
    cout << "KEY\tELEMENT\n";
    for (itr = mp.find(3); itr != mp.end(); itr++)
        cout << itr->first
             << '\t' << itr->second << '\n';

    return 0;
}
