#include <iostream>
using namespace std;
class Time
{
    int hours, minutes;

public:
    void gettime(int, int);
    void display();
    void sum(Time, Time);
};

void Time::gettime(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::display()
{
    cout << hours << " hours and " << minutes << " minutes" << endl;
}

void Time::sum(Time t1, Time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}

int main()
{
    Time T1, T2, T3;
    T1.gettime(2, 45);
    T2.gettime(3, 30);
    T1.display();
    T2.display();
    //T3.sum(T1, T2);
    T1.sum(T1, T2);
    T1.display();
}