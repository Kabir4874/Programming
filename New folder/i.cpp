#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    ll k = 1;
    for (ll i = 2; i <= n; i++)
    {
        k = (k * i) / gcd(k, i);
    }
    k += 1;
    cout << k << endl;
    return 0;
}