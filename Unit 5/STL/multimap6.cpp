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
    M.insert(pair<int, int>(4, 20));
    M.insert(pair<int, int>(5, 10));
    multimap<int, int>::iterator itr;
    cout << "\nThe multimap M is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = M.begin(); itr != M.end(); ++itr)
    {
        cout << "\t" << itr->first;
        cout << "\t" << itr->second << '\n';
    }
    // lower bound and upper bound for multimap M key = 5
    cout << "M.lower_bound(3) : "
         << "\tKEY = ";
    cout << M.lower_bound(3)->first << '\t';
    cout << "\tELEMENT = " << M.lower_bound(3)->second << endl;
    cout << "M.upper_bound(3) : "
         << "\tKEY = ";
    cout << M.upper_bound(3)->first << '\t';
    cout << "\tELEMENT = " << M.upper_bound(3)->second << endl;
    return 0;
}
