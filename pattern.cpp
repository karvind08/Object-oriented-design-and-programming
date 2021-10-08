#include <iostream>
using namespace std;

class Pattern
{
    int n;

public:
    Pattern(int x)
    {
        n = x;
    }
    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j;
            }
            cout << "\n";
        }
    }
};

int main()
{
    int n;
    cout << "\n Enter the number: ";
    cin >> n;
    Pattern P(n);
    P.display();
}