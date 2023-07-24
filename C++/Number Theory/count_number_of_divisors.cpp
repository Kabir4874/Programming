#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n, k;
    cin >> n >> k;
    set<ll> s;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
    }
    vector<ll> v;
    v.assign(v.begin(), v.end());
    if (k > v.size())
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << v[k - 1] << endl;
    }
    return 0;
}