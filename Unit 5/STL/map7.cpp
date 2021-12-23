#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> M;
    map<string, int>::iterator i;
    M["Arvind"] = 10;
    M["Arv"] = 20;
    for (i = M.begin(); i != M.end(); i++)
    {
        cout << (*i).first << " : " << (*i).second << endl;
    }
}