#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int MinSquares(int n)
{
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= n; j++)
        {
            int temp = j * j;
            if (i - temp >= 0)
            {
                dp[i] = min(dp[i], 1 + dp[i - temp]);
            }
        }
    }
    return dp[n];
}
int main()
{
    fastIO();

    return 0;
}