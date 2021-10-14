#include<iostream>
using namespace std;
class Item
{
        static int count;
    public:
        static void display()
        {
            cout<<count;
        }
        
};

int Item::count=10;

int main()
{
    Item::display();
}