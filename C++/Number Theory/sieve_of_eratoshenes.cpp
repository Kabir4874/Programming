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
int main()
{
    sieve();
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        cout << v[k - 1] << endl;
    }
    return 0;
}