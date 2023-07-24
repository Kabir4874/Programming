#include <iostream>
using namespace std;
typedef struct employee
{
    int id;
    char favchar;
    float salary;
} ep;
union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    // ep harry;
    // harry.id = 1;
    // harry.favchar = 'c';
    // harry.salary = 100000;
    // cout << "The value is: " << harry.id << endl;
    // cout << "The value is: " << harry.favchar << endl;
    // cout << "The value is: " << harry.salary << endl;
    // union money m1;
    // m1.rice = 12;
    // cout << m1.rice << endl;
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal m1 = breakfast;
    cout << m1;

    return 0;
}