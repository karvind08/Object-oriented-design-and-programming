#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<char, int> M;
    map<char, int>::iterator i;
    M.insert(pair<int, int>(1, 50));
    M.insert(pair<int, int>(2, 100));
    M.insert(pair<char, int>('a', 100));
    M.insert(pair<int, char>(5, 'z'));
    for (i = M.begin(); i != M.end(); i++)
    {
        cout << (*i).first << " : " << (*i).second << endl;
    }
}