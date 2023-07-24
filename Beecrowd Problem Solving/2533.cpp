#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a, b;
    while (cin >> t)
    {
        float sum1 = 0, sum2 = 0;
        while (t--)
        {
            cin >> a >> b;
            sum1 += a * b;
            sum2 += b * 100;
        }
        cout << fixed << setprecision(4) << sum1 / sum2 << endl;
    }
    return 0;
}