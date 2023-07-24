#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d)
    {
        int k, l, m, n, x, y;
        if (a < b)
        {
            k = a;
            x = b;
        }
        else
        {
            k = b;
            x = a;
        }
        if (c < d)
        {
            l = c;
            y = d;
        }
        else
        {
            l = d;
            y = c;
        }
        k += l;
        if (x < y)
        {
            m = x;
        }
        else
        {
            m = y;
        }
        if (k < m)
        {
            n = k;
        }
        else
        {
            n = m;
        }
        cout << n * n << endl;
    }
    return 0;
}