#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;
    cout << "Address of num is: " << &num << endl;

    int *ptr = &num;
    cout << "Value is: " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is: " << p2 << endl;
    cout << "Value is: " << *p2 << endl;

    cout << "Size of integer is: " << sizeof(num) << endl;
    cout << "Size of Pointer is: " << sizeof(p2) << endl;
    return 0;
}