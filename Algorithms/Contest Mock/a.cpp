#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> price(n);
        vector<int> weight(n);

        for (int i = 0; i < n; i++)
        {
            cin >> price[i] >> weight[i];
        }

        int f;
        cin >> f;

        vector<int> maxWeight(f);

        for (int i = 0; i < f; i++)
        {
            cin >> maxWeight[i];
        }

        vector<vector<int>> dp(n + 1, vector<int>(31, 0));

        for (int i = 0; i <= n; i++)
        {
            for (int w = 0; w <= 30; w++)
            {
                if (i == 0 || w == 0)
                {
                    dp[i][w] = 0;
                }
                else if (weight[i - 1] <= w)
                {
                    dp[i][w] = max(dp[i - 1][w], price[i - 1] + dp[i - 1][w - weight[i - 1]]);
                }
                else
                {
                    dp[i][w] = dp[i - 1][w];
                }
            }
        }

        int maxValue = 0;

        for (int i = 0; i < f; i++)
        {
            maxValue += dp[n][maxWeight[i]];
        }

        cout << maxValue << endl;
    }

    return 0;
}
