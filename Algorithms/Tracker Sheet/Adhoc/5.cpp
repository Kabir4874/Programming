#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, d;
        cin >> n >> x >> y >> d;
        if ((y - x) % d == 0)
        {
            cout << abs((y - x) / d) << endl;
        }
        else if ((y - 1) % d == 0 && (n - y) % d == 0)
        {
            int fp = (y - 1) / d + (x - 1) / d + 1;
            int bp = (n - y) / d + (n - x) / d + 1;
            cout << min(fp, bp) << endl;
        }
        else if ((y - 1) % d == 0)
        {
            cout << (y - 1) / d + (x - 1) / d + 1 << endl;
        }
        else if ((n - y) % d == 0)
        {
            cout << (n - y) / d + (n - x) / d + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}