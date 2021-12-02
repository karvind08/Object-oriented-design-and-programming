#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m{{1, 10}, {2, 20}, {3, 30}};
    map<int, int>::iterator it;
    cout << "Map m\n";
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }
    map<int, int> m1(m);
    cout << "Map m1\n";
    for (it = m1.begin(); it != m1.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }
    return (0);
}