#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int minSideJumps(vector<int> &obstacles)
{
    int n = obstacles.size() - 1;
    vector<vector<int>> dp(4, vector<int>(obstacles.size(), 1e9));
    dp[0][n] = 0;
    dp[1][n] = 0;
    dp[2][n] = 0;
    dp[3][n] = 0;
    for (int pos = n - 1; pos >= 0; pos--)
    {
        for (int lane = 1; lane <= 3; lane++)
        {
            if (obstacles[pos + 1] != lane)
            {
                dp[lane][pos] = dp[lane][pos + 1];
            }
            else
            {
                int ans = 1e9;
                for (int i = 1; i <= 3; i++)
                {
                    if (lane != i && obstacles[pos] != i)
                    {
                        ans = min(ans, 1 + dp[i][pos + 1]);
                    }
                }
                dp[lane][pos] = ans;
            }
        }
    }
    return min(dp[2][0], min(1 + dp[1][0], 1 + dp[3][0]));
}
int main()
{
    fastIO();

    return 0;
}