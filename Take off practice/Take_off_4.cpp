#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e = 0;
    cin >> a >> b >> c >> d;
    if (a == 1)
    {
        cout << "YES\n";
    }
    else
    {
        if (b == 1)
        {
            e++;
        }
        if (c == 1)
        {
            e++;
        }
        if (d == 1)
        {
            e++;
        }
        if (e >= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}