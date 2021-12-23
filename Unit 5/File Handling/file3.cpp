// opening file using constructor and writing
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s = "Arvind Kharwal";
    ofstream fout("hello.txt");
    fout << s;
    fout.close();
}