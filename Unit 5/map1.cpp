#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m{{1, 10}, {2, 20}, {3, 30}};
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }
    return (0);
}