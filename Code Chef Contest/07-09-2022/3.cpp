#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d, t, n;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a < b || (a > 1 && b > 1 && a == b))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}