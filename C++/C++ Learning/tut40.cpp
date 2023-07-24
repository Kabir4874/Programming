#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student::set_roll_number(int r)
{
    roll_number = r;
}
void student::get_roll_number(void)
{
    cout << "The roll number is: " << roll_number << endl;
}
class exam : public student
{
protected:
    float math;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam::set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}
void exam::get_marks(void)
{
    cout << "The mark obtained in math is: " << math << endl;
    cout << "The mark obtained in physics is: " << physics << endl;
}
class result : public exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "The percentage is: " << (math + physics) / 2 << "%" << endl;
    }
};
int main()
{
    result kabir;
    kabir.set_roll_number(4874);
    kabir.set_marks(90.0, 86.0);
    kabir.display_result();

    return 0;
}