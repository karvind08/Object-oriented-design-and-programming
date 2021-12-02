#include <map>
#include <iostream>
using namespace std;
int main()
{
    map<int, char> m;
    map<int, char>::iterator it;
    m[1] = 'a';
    m[2] = 'b';
    m[3] = 'c';
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }
    return (0);
}