#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    ll dp[n][3];
    for (int i = 0; i < 3; i++)
    {
        dp[0][i] = arr[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            dp[i][j] = arr[i][j] + max(dp[i - 1][(j + 1) % 3], dp[i - 1][(j + 2) % 3]);
        }
    }
    ll maxi = dp[n - 1][0];
    for (int j = 1; j < 3; j++)
    {
        maxi = max(maxi, dp[n - 1][j]);
    }
    cout << maxi << endl;
    return 0;
}
