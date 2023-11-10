#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
unordered_map<ll, ll> dp;
ll attacks(ll h)
{
    if (h <= 0)
    {
        return 0;
    }
    if (h == 1)
    {
        return 1;
    }
    if (dp.find(h) != dp.end())
    {
        return dp[h];
    }
    dp[h] = 1 + attacks(floor(h / 2)) + attacks(ceil(h / 2));
    return dp[h];
}
int main()
{
    fastIO();
    ll n;
    cin >> n;
    cout << attacks(n) << endl;
    return 0;
}