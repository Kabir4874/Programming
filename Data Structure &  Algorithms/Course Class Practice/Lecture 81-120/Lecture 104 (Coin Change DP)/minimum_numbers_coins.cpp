#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int coins[5] = {2, 5, 7, 10, 20};
    int n = 12;
    int ans[5][n + 1];
    for (int i = 0; i <= n; i++)
    {
        ans[0][i] = i;
    }
    for (int i = 1; i < 5; i++)
    {

        for (int j = 0; j <= n; j++)
        {
            if (coins[i] > j)
            {
                ans[i][j] = ans[i - 1][j];
            }
            else
            {
                ans[i][j] = min(ans[i - 1][j], 1 + ans[i][j - coins[i]]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << ans[4][n];
    return 0;
}