#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d && a && b && c && d)
    {
        if (a == c && b == d)
        {
            cout << "0" << endl;
        }
        else if (c - a == -(d - b) || -(c - a) == -(d - b) || -(c - a) == (d - b) || (c - a) == (d - b))
        {
            cout << "1" << endl;
        }
        else if (a == c || b == d)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    return 0;
}