#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
int main()
{
    int n;
    while (cin >> n)
    {
        int coin[6] = {0, 1, 5, 10, 25, 50};
        ull ans[6][n + 1];
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                ans[i][j] = 0;
            }
        }
        ans[0][0] = 1;
        for (int i = 1; i < 6; i++)
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
        if (ans[5][n] == 1)
        {
            cout << "There is only " << 1 << " way to produce " << n << " cents change." << endl;
        }
        else
        {
            cout << "There are " << ans[5][n] << " ways to produce " << n << " cents change." << endl;
        }
    }
    return 0;
}