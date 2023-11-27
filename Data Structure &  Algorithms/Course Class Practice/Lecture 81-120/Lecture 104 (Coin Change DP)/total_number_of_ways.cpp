#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
int main()
{
    int n;
    while (cin >> n)
    {
        int coin[6] = {0, 1, 5, 10, 25, 50};
        vector<ull> ans(n + 1, 0);
        ans[0] = 1;
        for (int i = 1; i < 6; i++)
        {
            for (int j = coin[i]; j <= n; j++)
            {
                ans[j] += ans[j - coin[i]];
            }
        }
        if (ans[n] == 1)
        {
            cout << "There is only " << 1 << " way to produce " << n << " cents change." << endl;
        }
        else
        {
            cout << "There are " << ans[n] << " ways to produce " << n << " cents change." << endl;
        }
    }
    return 0;
}
