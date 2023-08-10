#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int p, q, r, s, t, u;
    while (cin >> p >> q >> r >> s >> t >> u)
    {
        float x = p * exp(-1) + q * sin(1) + r * cos(1) + s * tan(1) + t + u;

        if (x > 1e-9 || p + r + u < 0)
        {
            cout << "No solution" << endl;
            continue;
        }
        float low = 0.0;
        float high = 1.0;
        float mid, k;
        for (int i = 0; i < 50; i++)
        {
            mid = (low + high) / 2;
            k = p * exp(-mid) + q * sin(mid) + r * cos(mid) + s * tan(mid) + t * mid * mid + u;
            if (k > 0)
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }
        cout << fixed << setprecision(4) << low << endl;
    }
    return 0;
}