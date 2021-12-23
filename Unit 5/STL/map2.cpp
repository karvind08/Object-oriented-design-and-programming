#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<char, int> M = {{'a', 10}, {'b', 20}};
    map<char, int>::iterator i;
    for (i = M.begin(); i != M.end(); i++)
    {
        cout << (*i).first << " : " << (*i).second << endl;
    }
}