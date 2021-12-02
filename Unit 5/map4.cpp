#include <map>
#include <iostream>
using namespace std;
int main()
{
    map<string, int> m;
    map<string, int>::iterator it;
    m["arvind"] = 40;
    m["sachin"] = 42;
    m["Kukku"] = 43;
    cout << "The elements of map m\n";
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }
    cout << "After copying map m to map m1\n";
    map<string, int> m1(m.begin(), m.end());
    for (it = m1.begin(); it != m1.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }
    return (0);
}