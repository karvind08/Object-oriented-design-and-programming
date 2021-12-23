#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> M = {{1, 10}, {2, 20}};
    map<int, int>::iterator i;
    for (i = M.begin(); i != M.end(); i++)
    {
        cout << (*i).first << " : " << (*i).second << endl;
    }
    map<int, int> M1(M);
    for (i = M.begin(); i != M.end(); i++)
    {
        cout << (*i).first << " : " << (*i).second << endl;
    }
}