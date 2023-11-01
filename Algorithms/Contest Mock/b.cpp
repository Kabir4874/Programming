#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool getCoins(vector<pair<int, int>> &coins, int amount, vector<int> &coinsUsed)
{
    int numCoins = 0;
    int n = coins.size();
    sort(coins.rbegin(), coins.rend());

    for (int i = 0; i < n; i++)
    {
        if (amount <= 0)
        {
            break;
        }
        int k = min(coins[i].second, amount / coins[i].first);
        numCoins += k;
        coins[i].second -= k;
        amount -= k * coins[i].first;
        for (int j = 0; j < k; j++)
        {
            coinsUsed.push_back(coins[i].first);
        }
    }

    if (amount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    fastIO();
    vector<pair<int, int>> coins = {{1, 1}, {2, 1}, {4, 1}, {8, 1}, {16, 1}, {32, 1}};
    int a, b;
    cin >> a >> b;
    int k = b - a;
    vector<int> coinsUsed;
    bool ans = getCoins(coins, k, coinsUsed);

    if (ans)
    {
        bool temp = false;
        for (int coin : coinsUsed)
        {
            if (coin == 2)
            {
                temp = true;
                break;
            }
        }
        if (temp)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
