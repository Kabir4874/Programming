#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
long long noOfWays(int d, int f, int t)
{
    vector<vector<long long>> dp(d + 1, vector<long long>(t + 1, 0));
    dp[0][0] = 1;
    for (int dice = 1; dice <= d; dice++)
    {
        for (int target = 1; target <= t; target++)
        {
            long long ans = 0;
            for (int i = 1; i <= f; i++)
            {
                if (target - i >= 0)
                {
                    ans = ans + dp[dice - 1][target - i];
                }
            }
            dp[dice][target] = ans;
        }
    }
    return dp[d][t];
}
int main()
{
    fastIO();

    return 0;
}