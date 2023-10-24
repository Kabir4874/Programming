#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> ans(n + 1, LLONG_MAX);
    ans[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= k && i - j >= 1; j++)
        {
            ans[i] = min(ans[i], ans[i - j] + abs(arr[i] - arr[i - j]));
        }
    }
    cout << ans[n] << endl;
    return 0;
}