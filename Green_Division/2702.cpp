#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e, f, total = 0;
    cin >> a >> b >> c >> d >> e >> f;
    if (a < d)
    {
        int n = d - a;
        total += n;
    }
    if (b < e)
    {
        int l = e - b;
        total += l;
    }
    if (c < f)
    {
        int k = f - c;
        total += k;
    }
    cout << total << endl;

    return 0;
}