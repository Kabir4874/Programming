#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "You cannot come to the party" << endl;
    }
    else if (age == 18)
    {
        cout << "Your need a pass to come to the party" << endl;
    }
    else
    {
        cout << "Your can come to the party" << endl;
    }

    return 0;
}