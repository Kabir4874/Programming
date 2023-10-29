#include <bits/stdc++.h>
using namespace std;

int minCoinsGreedy(vector<pair<int, int>> &coinDenominations, int amount, vector<int> &coinUsedCount)
{
    int numCoins = 0;
    int n = coinDenominations.size();
    sort(coinDenominations.rbegin(), coinDenominations.rend());
    for (int i = 0; i < n; i++)
    {
        if (amount <= 0)
        {
            break;
        }

        int numToUse = min(coinDenominations[i].second - coinUsedCount[i], amount / coinDenominations[i].first);
        numCoins += numToUse;
        coinUsedCount[i] += numToUse;
        amount -= numToUse * coinDenominations[i].first;
    }
    if (amount == 0)
    {
        return numCoins;
    }
    else
    {
        return -1; // It's not possible to make change for the given amount with the available coins.
    }
}

int main()
{
    vector<pair<int, int>> coinDenominations = {
        {1, 10}, // Denomination 5 with count 4
        {2, 5},  // Denomination 2 with count 5
        {5, 4}   // Denomination 1 with count 10
    };

    int amount = 30; // Amount for which you want to make change
    vector<int> coinUsedCount(coinDenominations.size(), 0);

    int result = minCoinsGreedy(coinDenominations, amount, coinUsedCount);

    if (result == -1)
    {
        cout << "It's not possible to make change for " << amount << " with the given denominations and available coins." << endl;
    }
    else
    {
        cout << "Minimum number of coins needed to make change for " << amount << " is: " << result << endl;
        cout << "Coin breakdown:" << endl;
        for (int i = 0; i < coinDenominations.size(); i++)
        {
            if (coinUsedCount[i] > 0)
            {
                cout << coinDenominations[i].first << " used " << coinUsedCount[i] << " times" << endl;
            }
        }
    }

    return 0;
}
