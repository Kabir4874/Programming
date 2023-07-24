#include <bits/stdc++.h>
using namespace std;
class simpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter tha value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }
    void operationsSimple()
    {
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << (float)a / b << endl;
    }
};
class scientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter tha value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }
    void operationsScientific()
    {
        cout << "The value of cos(a) is: " << cos(a) << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of exp(a) is: " << exp(a) << endl;
        cout << "The value of tan(a) is: " << tan(a) << endl;
    }
};
class hybridCalculator:public simpleCalculator, public scientificCalculator
{

};
int main()
{
    // simpleCalculator cal;
    // cal.getDataSimple();
    // cal.operationsSimple();
    hybridCalculator calc;
    calc.getDataScientific();
    calc.operationsScientific();
    calc.getDataSimple();
    calc.operationsSimple();
    return 0;
}