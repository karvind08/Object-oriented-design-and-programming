#include <iostream>
using namespace std;
#include <array>
int main()
{
    array<int, 5> a = {10, 20, 30, 40, 50};
    int size = a.size();
    cout << "Size of array: " << a.size() << endl;
    for (int i = 0; i < size; i++)
        cout << a[i] << endl;
    cout << "\nElement at 2nd index:" << a.at(2) << endl;
    cout << "\narray is empty or not:" << a.empty() << endl;
    cout << "First element" << a.front() << endl;
    cout << "Last element" << a.back() << endl;
}