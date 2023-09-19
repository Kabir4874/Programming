#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
int coin[25];
int main()
{
    int n;
    while (cin >> n)
    {
        coin[0] = 0;
        for (int i = 1; i < 22; i++)
        {
            coin[i] = i * i * i;
        }
        ull ans[22][n + 1];
        for (int i = 0; i < 22; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                ans[i][j] = 0;
            }
        }
        ans[0][0] = 1;
        for (int i = 1; i < 22; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (coin[i] > j)
                {
                    ans[i][j] = ans[i - 1][j];
                }
                else
                {
                    ans[i][j] = ans[i - 1][j] + ans[i][j - coin[i]];
                }
            }
        }
        cout << ans[21][n] << endl;
    }
    return 0;
}