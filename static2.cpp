#include<iostream>
using namespace std;

class Item
{
        static int count;
        int a;
    public:
        void getdata(int x)
        {
            a = x;
            count++;
        }

        void display()
        {
            cout<<count<<endl;
        }
};

int Item::count;

int main()
{
    Item i1,i2;
    i1.display();
    i2.display();
    i1.getdata(10);
    i2.getdata(20);
    i1.display();
    i2.display();
}