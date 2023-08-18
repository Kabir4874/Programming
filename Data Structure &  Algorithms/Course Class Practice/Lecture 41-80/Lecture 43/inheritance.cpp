#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Human
{
public:
    int height;
    int weight;
    int age;
    int getAge()
    {
        return this->age;
    }
    int setWeight(int w)
    {
        this->weight = w;
    }
};
class Male : public Human
{
public:
    string color;
    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }
};
int main()
{
    Male obj1;
    cout << obj1.age << endl;
    return 0;
}