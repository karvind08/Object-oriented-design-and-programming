#include<iostream>
using namespace std;
class Array
{
        int marks[5];
    public:
        void getdata()
        {
            int i;
            for(i=0;i<5;i++)
            {
                cout<<"Enter the marks: ";
                cin>>marks[i];
            }
        }
        void display()
        {
            int s=0;
            for(int i=0;i<5;i++)
            {
                s = s+marks[i];
            }
            cout<<"\n The total marks are: "<<s;
        }

};

int main()
{
    Array A1;
    A1.getdata();
    A1.display();
}