#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
    char line[100];
    ifstream fin1, fin2;
    fin1.open("data1.txt");
    fin2.open("data2.txt");
    for (int i = 1; i <= 10; i++)
    {
        if (fin1.eof() != 0)
        {
            cout << "Exit from the data 1 \n";
            exit(1);
        }
        fin1.getline(line, 100);
        cout << " Data 1 " << line << endl;

        if (fin2.eof() != 0)
        {
            cout << "Exit from Data 2 \n";
            exit(1);
        }
        fin2.getline(line, 100);
        cout << " Data 2 " << line << endl;
    }
    fin1.close();
    fin2.close();
}