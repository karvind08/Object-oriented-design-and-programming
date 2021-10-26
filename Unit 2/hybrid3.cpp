#include <iostream>
using namespace std;
class Student
{
protected:
    int r;

public:
    void get_number(int x)
    {
        r = x;
    }
    void put_number()
    {
        cout << "The roll number is:" << r << endl;
    }
};
class Test : virtual public Student
{
protected:
    int sub1, sub2;

public:
    void get_marks(int x, int y)
    {
        sub1 = x;
        sub2 = y;
    }
    void put_marks()
    {
        cout << "Sub 1: " << sub1 << endl;
        cout << "Sub 2: " << sub2 << endl;
    }
};

class Soprts : virtual public Student
{
protected:
    int score;

public:
    void get_score(int x)
    {
        score = x;
    }
    void put_score()
    {
        cout << "The sports score: " << score << endl;
    }
};

class Result : public Test, public Soprts
{
    int total;

public:
    void display()
    {
        total = sub1 + sub2 + score;
        cout << "Total: " << total << endl;
    }
};

int main()
{
    Result R1;
    R1.get_number(1);
    R1.put_number();
    R1.get_marks(75, 85);
    R1.put_marks();
    R1.get_score(20);
    R1.put_score();
    R1.display();
}