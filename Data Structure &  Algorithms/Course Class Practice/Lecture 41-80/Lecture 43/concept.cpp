#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Student
{
private:
    string name;
    int age = 40;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};
int main()
{
    Student first;

    cout << first.getAge() << endl;

    return 0;
}