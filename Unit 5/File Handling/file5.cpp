// opening file using constructor and reading
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s;
    ifstream in("test.txt");
    getline(in, s);
    cout << s;
    in.close();
}