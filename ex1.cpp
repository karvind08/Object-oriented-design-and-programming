#include <iostream>
using namespace std;
class Sample
{
    int a;

public:
    void getdata(int x)
    {
        a = x;
        cout << a;
    }
};

int main()
{
    Sample S;
    //S.a = 10;
    S.getdata(10);
}