#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    int item[n], price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> item[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
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
            if (j < item[i])
            {
                ans[i][j] = ans[i - 1][j];
            }
            else
            {
                if (ans[i - 1][j - item[i - 1]] + price[i - 1] > ans[i - 1][j])
                {

                    ans[i][j] = ans[i - 1][j - item[i - 1]] + price[i - 1];
                }
                else
                {
                    ans[i][j] = ans[i - 1][j];
                }
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= ks; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}