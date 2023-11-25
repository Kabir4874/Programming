#include <iostream>
#include <vector>
using namespace std;
#define ll long long int

int main()
{
    int n, ks;
    cin >> n >> ks;

    vector<int> item(n), price(n);

    for (int i = 0; i < n; i++)
    {
        cin >> item[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    vector<vector<int>> ans(n + 1, vector<int>(ks + 1, 0));

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

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += price[i];
    }

    if (cnt == ans[n][ks])
    {
        cout << "My King, I am successful in capturing the big fish. Immortality is few steps away." << endl;
    }
    else
    {
        cout << "My King, I have captured " << ans[n][ks] << " followers till now and I need more soldiers asap." << endl;
    }

    return 0;
}
