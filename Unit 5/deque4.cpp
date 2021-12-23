#include <deque>
#include <iostream>
using namespace std;
int main()
{
    deque<int> D1;
    deque<int>::iterator it;
    D1.push_back(10);
    D1.push_back(20);
    D1.push_back(30);
    for (it = D1.begin(); it != D1.end(); it++)
        cout << *it << endl;
    cout << "The element at: " << D1.at(1);
}