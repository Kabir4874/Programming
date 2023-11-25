#include <iostream>
#include <vector>
using namespace std;

long long maxWaysToMakeChange(vector<pair<int, int>> &coins, int amount)
{
    vector<long long> dp(amount + 1, 0);
    dp[0] = 1;

    for (const auto &coin : coins)
    {
        vector<long long> temp(amount + 1, 0);
        for (int j = 0; j <= amount; j++)
        {
            for (int k = 0; k <= coin.second && j + k * coin.first <= amount; k++)
            {
                temp[j + k * coin.first] += dp[j];
            }
        }
        dp = temp;
    }

    return dp[amount];
}

int main()
{
    vector<pair<int, int>> coins = {{1, 0}, {2, 0}, {3, 0}, {4, 0}};
    int amount = 0;

    for (auto &coin : coins)
    {
        cout << "Enter coin limit for " << coin.first << ": ";
        cin >> coin.second;
    }

    cout << "Enter the amount: ";
    cin >> amount;

    long long ways = maxWaysToMakeChange(coins, amount);

    cout << "Maximum number of ways to make change: " << ways << endl;

    return 0;
}
