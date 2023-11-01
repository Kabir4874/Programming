#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int coinChange(vector<pair<int, int>> &coins, int amount)
{
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, INT_MAX));
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            dp[i][j] = dp[i - 1][j]; // Initialize with the previous result

            for (int k = 1; k <= coins[i - 1].second && j >= k * coins[i - 1].first; k++)
            {
                if (dp[i - 1][j - k * coins[i - 1].first] != INT_MAX)
                {
                    dp[i][j] = min(dp[i][j], dp[i - 1][j - k * coins[i - 1].first] + k);
                }
            }
        }
    }

    return (dp[n][amount] == INT_MAX) ? -1 : dp[n][amount];
}

int main()
{
    vector<pair<int, int>> coins = {{5, 0}, {10, 0}, {20, 0}, {50, 0}, {100, 0}, {200, 0}}; // Predefined coin values
    int amount = 0;

    for (int i = 0; i < coins.size(); i++)
    {
        cout << "Enter coin limit for " << coins[i].first << ": ";
        cin >> coins[i].second;
    }

    cout << "Enter the amount: ";
    cin >> amount;

    int result = coinChange(coins, amount);

    cout << "Minimum number of coins: " << result << endl;

    return 0;
}
