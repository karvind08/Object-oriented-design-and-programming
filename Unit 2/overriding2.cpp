#include <iostream>
using namespace std;
class Father
{
public:
    void vehicle()
    {
        cout << "Bajaj Scooter";
    }
};

class Son : public Father
{
public:
    void vehicle()
    {
        cout << "Bike";
    }
};

int main()
{
    Son S;
    S.Father::vehicle();
}