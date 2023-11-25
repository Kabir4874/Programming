#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int coins[5] = {2, 5, 7, 10, 20};
    int n = 35;
    int ans[n + 1];

    for (int i = 0; i <= n; i++)
    {
        ans[i] = i / coins[0];
    }

    for (int i = 1; i < 5; i++)
    {
        for (int j = coins[i]; j <= n; j++)
        {
            ans[j] = min(ans[j], 1 + ans[j - coins[i]]);
        }
    }

    cout << ans[n] << endl;
    return 0;
}
