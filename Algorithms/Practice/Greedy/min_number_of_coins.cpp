#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minCoinsGreedy(vector<int> &coins, int amount, vector<int> &coinCount)
{
    int numCoins = 0;
    int n = coins.size();

    // Sort the coin denominations in descending order.
    sort(coins.rbegin(), coins.rend());

    for (int i = 0; i < n; i++)
    {
        int count = amount / coins[i];
        if (count > 0)
        {
            numCoins += count;
            amount -= count * coins[i];
            coinCount[i] = count;
        }
    }

    if (amount == 0)
    {
        return numCoins;
    }
    else
    {
        // It's not possible to make change for the given amount.
        return -1;
    }
}

int main()
{
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 1000}; // Example coin denominations
    int amount = 93;                                           // Amount for which you want to make change
    vector<int> coinCount(coins.size(), 0);

    int result = minCoinsGreedy(coins, amount, coinCount);

    if (result == -1)
    {
        cout << "It's not possible to make change for " << amount << " with the given denominations." << endl;
    }
    else
    {
        cout << "Minimum number of coins needed to make change for " << amount << " is: " << result << endl;
        cout << "Coin breakdown:" << endl;
        for (int i = 0; i < coins.size(); i++)
        {
            if (coinCount[i] > 0)
            {
                cout << coins[i] << " used " << coinCount[i] << " times" << endl;
            }
        }
    }

    return 0;
}
