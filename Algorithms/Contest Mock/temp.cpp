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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int price[n], weight[n];
        for (int i = 0; i < n; i++)
        {
            cin >> price[i] >> weight[i];
        }
        int x;
        cin >> x;
        ll sum = 0;
        while (x--)
        {
            int ks;
            cin >> ks;
            int ans[n + 1][ks + 1];
            for (int i = 0; i <= ks; i++)
            {
                ans[0][i] = 0;
            }
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= ks; j++)
                {
                    if (j < weight[i - 1])
                    {
                        ans[i][j] = ans[i - 1][j];
                    }
                    else
                    {
                        ans[i][j] = max(ans[i - 1][j], ans[i - 1][j - weight[i - 1] + price[i - 1]]);
                    }
                }
            }
            sum += ans[n][ks];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < ks; j++)
                {
                    cout << ans[i][j]<<" ";
                }
                cout << endl;
            }
        }
        cout << sum << endl;
    }
    return 0;
}