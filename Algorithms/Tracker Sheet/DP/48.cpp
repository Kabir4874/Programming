#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, ks;
    cin >> n >> ks;
    ll item[n], price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> item[i] >> price[i];
    }
    ll ans[n + 1][ks + 1];
    for (ll i = 0; i <= ks; i++)
    {
        ans[0][i] = 0;
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j <= ks; j++)
        {
            if (j < item[i - 1])
            {
                ans[i][j] = ans[i - 1][j];
            }
            else
            {
                ans[i][j] = max(ans[i - 1][j], ans[i - 1][j - item[i - 1]] + price[i - 1]);
            }
        }
    }
    cout << ans[n][ks] << endl;
    return 0;
}