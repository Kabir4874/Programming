#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
ull arr[12][30001];
ll k;
int main()
{
    while (1)
    {
        double n;
        cin >> n;
        if (n == 0.00)
        {
            break;
        }
        int coin[12] = {0, 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
        k = static_cast<int>(n * 100 + 0.5);
        for (ll i = 0; i < 12; i++)
        {
            for (ll j = 0; j <= k; j++)
            {
                arr[i][j] = 0;
            }
        }
        arr[0][0] = 1;
        for (ll i = 1; i < 12; i++)
        {
            for (ll j = 0; j <= k; j++)
            {
                if (coin[i] > j)
                {
                    arr[i][j] = arr[i - 1][j];
                }
                else
                {
                    arr[i][j] = arr[i - 1][j] + arr[i][j - coin[i]];
                }
            }
        }
        cout << fixed << right << setw(6) << setprecision(2) << n << fixed << setw(17) << setprecision(0) << arr[11][k] << endl;
    }
    return 0;
}