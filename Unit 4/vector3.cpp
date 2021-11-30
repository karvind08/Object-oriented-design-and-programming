#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> n;
    for (int i = 1; i <= 10; i++)
    {
        n.push_back(i);
    }
    cout << "\nVector size" << n.size() << endl;
    cout << "\nCapacity of Vector:" << n.capacity() << endl;
    cout << "\nMax Size" << n.max_size() << endl;
    n.resize(5);
    cout << "\nVector size after resizing: " << n.size() << endl;
    if (n.empty() == 1)
        cout << "Vector is empty";
    else
        cout << "Vector is not empty";
}