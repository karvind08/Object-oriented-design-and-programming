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
    cout << "The elements of the Deque: \n";
    for (it = D1.begin(); it != D1.end(); it++)
        cout << *it << endl;
    D1.push_front(5);
    D1.push_front(1);
    cout << "The elements after push front: \n";
    for (it = D1.begin(); it != D1.end(); it++)
        cout << *it << endl;
}