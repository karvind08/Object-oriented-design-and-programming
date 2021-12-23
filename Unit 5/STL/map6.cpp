#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> M;
    map<int, int>::iterator i;
    M[1] = 10;
    M[2] = 20;
    for (i = M.begin(); i != M.end(); i++)
    {
        cout << (*i).first << " : " << (*i).second << endl;
    }
}