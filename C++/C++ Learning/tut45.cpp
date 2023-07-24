#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your roll number is: " << roll_no << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here:" << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is: " << score << endl;
    }
};
class result : public test, public sports
{
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};
int main()
{
    result harry;
    harry.set_number(4874);
    harry.set_marks(78.0, 89.0);
    harry.set_score(10);
    harry.display();
    return 0;
}