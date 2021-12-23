#include <iostream>
using namespace std;
#include <fstream>
class Student
{
    int id;
    char name[20];

public:
    void getdata()
    {
        cout << "Enter the data: ";
        cin >> id >> name;
    }
};

int main()
{
    Student S1;
    ofstream file;
    file.open("info.dat");
    char ch;
    do
    {
        S1.getdata();
        file.write((char *)&S1, sizeof(S1));
        cout << "One row created!";
        cout << "Do you want to add more data(y/n)";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    file.close();
}