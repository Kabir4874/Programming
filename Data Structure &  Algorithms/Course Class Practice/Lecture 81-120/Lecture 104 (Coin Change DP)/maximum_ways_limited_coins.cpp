#include <iostream>
#include <vector>
using namespace std;
long long maxWaysToMakeChange(vector<pair<int, int>> &coins, int amount)
{
    int n = coins.size();
    vector<vector<long long>> dp(n + 1, vector<long long>(amount + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            for (int k = 0; k <= coins[i - 1].second; k++)
            {
                if (j >= k * coins[i - 1].first)
                {
                    dp[i][j] += dp[i - 1][j - k * coins[i - 1].first];
                }
            }
        }
    }

    return dp[n][amount];
}
int main()
{
    vector<pair<int, int>> coins = {{1, 0}, {2, 0}, {3, 0}, {4, 0}};
    int amount = 0;

    for (int i = 0; i < coins.size(); i++)
    {
        cout << "Enter coin limit for " << coins[i].first << ": ";
        cin >> coins[i].second;
    }

    cout << "Enter the amount: ";
    cin >> amount;

    long long ways = maxWaysToMakeChange(coins, amount);

    cout << "Maximum number of ways to make change: " << ways << endl;

    return 0;
}
