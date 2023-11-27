#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int INF = 1e9; // A large enough value to represent infinity
int coinChange(vector<pair<int, int>> &coins, int amount)
{
    int n = coins.size();
    vector<int> dp(amount + 1, INF);
    dp[0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = coins[i].first; j <= amount; j++)
        {
            int numCoins = min(coins[i].second, (j - coins[i].first) / coins[i].first + 1);
            dp[j] = min(dp[j], dp[j - numCoins * coins[i].first] + numCoins);
        }
    }
    return (dp[amount] == INF) ? -1 : dp[amount];
}
int main()
{
    vector<pair<int, int>> coins = {{5, 0}, {10, 0}, {20, 0}, {50, 0}, {100, 0}, {200, 0}}; // Predefined coin values
    int amount = 0;
    for (auto &coin : coins)
    {
        cout << "Enter coin limit for " << coin.first << ": ";
        cin >> coin.second;
    }
    cout << "Enter the amount: ";
    cin >> amount;
    int result = coinChange(coins, amount);
    cout << "Minimum number of coins: " << result << endl;
    return 0;
}
