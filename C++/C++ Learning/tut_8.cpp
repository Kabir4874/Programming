#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 2, b = 233, c = 4395;
    cout << "The value of a is without setw:" << a << endl;
    cout << "The value of b is without setw:" << b << endl;
    cout << "The value of c is without setw:" << c << endl;

    cout << "The value of a is with setw:" << setw(4) << a << endl;
    cout << "The value of b is with setw:" << setw(4) << b << endl;
    cout << "The value of c is with setw:" << setw(4) << c << endl;

    return 0;
}