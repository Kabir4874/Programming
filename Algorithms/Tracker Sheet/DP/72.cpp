#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 100000007;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

ll maxWaysToMakeChange(vector<pair<int, int>> &coins, int amount)
{
    int n = coins.size();
    vector<vector<ll>> dp(n + 1, vector<ll>(amount + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            for (int k = 0; k <= coins[i - 1].second; k++)
            {
                if (j >= k * coins[i - 1].first)
                {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - k * coins[i - 1].first]) % MOD;
                }
            }
        }
    }

    return dp[n][amount];
}

int main()
{
    fastIO();
    int t, k = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> coins(n);
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i].second;
        }
        ll ans = maxWaysToMakeChange(coins, m);
        cout << "Case " << k++ << ": " << ans % MOD << endl;
    }
    return 0;
}
