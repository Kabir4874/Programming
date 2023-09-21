#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int knapsack(int coin[], int n, int ks)
{
    int ans[n + 1][ks + 1];
    for (int i = 0; i <= ks; i++)
    {
        ans[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= ks; j++)
        {
            if (j < coin[i - 1])
            {
                ans[i][j] = ans[i - 1][j];
            }
            else
            {
                ans[i][j] = max(ans[i - 1][j], ans[i - 1][j - coin[i - 1]] + coin[i - 1]);
            }
        }
    }
    return ans[n][ks];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ks;
        cin >> n;
        int coin[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> coin[i];
            sum += coin[i];
        }
        int k = knapsack(coin, n, sum / 2);
        cout << sum - k * 2 << endl;
    }
    return 0;
}