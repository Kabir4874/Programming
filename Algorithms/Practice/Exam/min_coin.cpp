#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int minCoins(vector<int> &coins, int target)
{
    int n = coins.size();
    vector<vector<int>> dp(target + 1, vector<int>(n + 1, INT_MAX));

    for (int i = 0; i <= n; ++i)
        dp[0][i] = 0;
    for (int i = 1; i <= target; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (coins[j - 1] <= i)
            {
                int withoutCoin = dp[i][j - 1];
                int withCoin = dp[i - coins[j - 1]][j];
                if (withCoin != INT_MAX)
                    dp[i][j] = min(withoutCoin, 1 + withCoin);
                else
                    dp[i][j] = withoutCoin;
            }
            else
            {
                dp[i][j] = dp[i][j - 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[target][n];
}
int main()
{
    vector<int> coins = {2, 5, 7, 10, 20};
    int target_value = 12;
    int result = minCoins(coins, target_value);
    cout << "The minimum number of coins needed to make " << target_value << " is " << result << "." << endl;
    return 0;
}