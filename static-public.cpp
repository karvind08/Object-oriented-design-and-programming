#include <iostream>
using namespace std;
class Item
{

public:
    static int count;
    /*
    static void display()
    {
        cout << count;
    }*/
};

int Item::count = 10;

int main()
{
    cout << Item::count;
}