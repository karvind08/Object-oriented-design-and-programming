#include <iostream>
using namespace std;
void divide(double x, double y)
{
    cout << "Divide function\n";
    try
    {
        if (y == 0.0)
            throw y;
        else
            cout << "The division is: " << x / y << "\n";
    }
    catch (double)
    {
        cout << "Caught double inside function\n";
        throw;
    }
    cout << "End of divide function\n";
}
int main()
{
    cout << "In main function\n";
    try
    {
        divide(5.5, 2.1);
        divide(5.2, 0.0);
    }
    catch (double)
    {
        cout << "Caught double exception in main\n";
    }
}