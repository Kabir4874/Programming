#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int knapsack(int item[], int price[], int n, int ks)
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
            if (j < item[i - 1])
            {
                ans[i][j] = ans[i - 1][j];
            }
            else
            {
                ans[i][j] = max(ans[i - 1][j], ans[i - 1][j - item[i - 1]] + price[i - 1]);
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
        int item[n], price[n];
        for (int i = 0; i < n; i++)
        {
            cin >> price[i] >> item[i];
        }
        int k;
        cin >> k;
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += knapsack(item, price, n, arr[i]);
        }
        cout << sum << endl;
    }
    return 0;
}