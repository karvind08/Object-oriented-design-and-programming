#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int first[] = {15, 12, 30, 45, 15};
    int second[] = {10, 20, 30, 40, 50};
    int results[5];
    transform(first, first + 5, second, results, plus<int>());
    for (int i = 0; i < 5; i++)
        cout << results[i] << ' ';
    cout << '\n';
    return 0;
}