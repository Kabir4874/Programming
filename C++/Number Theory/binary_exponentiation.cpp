#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll power(ll base, ll n, ll mod)
{
    ll result = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            result = (result * base) % mod;
            n--;
        }
        else
        {
            base = (base * base) % mod;
            n /= 2;
        }
    }
    return result;
}
int main()
{
    ll ans, n;
    cin >> n;
    ans = power(1378, n, 10);
    int k = ans % 10;
    cout << k << endl;
    return 0;
}