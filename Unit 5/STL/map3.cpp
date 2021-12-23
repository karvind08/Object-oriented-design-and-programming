#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> M = {{"Arvind", 10}, {"Kumar", 20}};
    map<string, int>::iterator i;
    for (i = M.begin(); i != M.end(); i++)
    {
        cout << (*i).first << " : " << (*i).second << endl;
    }
}