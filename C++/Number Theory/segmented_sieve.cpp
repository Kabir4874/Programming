#include <bits/stdc++.h>
using namespace std;
int n = 90000000;
vector<int> v;
void sieve()
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (prime[i])
        {
            v.push_back(i);
        }
    }
}
void init(int l, int r)
{
    if (l == 1)
        l++;
    int mx = r - l + 1;
    int ar[mx + 1];
    for (int i = 0; i <= mx; i++)
        ar[i] = 1;
    for (int p : v)
    {
        if (p <= sqrt(r))
        {
            int i = (l / p) * p;
            if (i < l)
                i += p;
            for (; i <= r; i += p)
            {
                if (i != p)
                {
                    ar[i - l] = 0;
                }
            }
        }
    }

    for (int i = 0; i < mx; i++)
    {
        if (ar[i])
        {
            cout << l + i << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        init(l, r);
        cout << endl;
    }
    return 0;
}