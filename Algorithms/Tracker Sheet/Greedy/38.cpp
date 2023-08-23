#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int total(int n, int k)
{
    int ans = 0;
    while (n >= k)
    {
        int x = n / k;
        ans += x;
        n = x + n % k;
    }
    return ans;
}
int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int ans = total(n, k);
        cout << ans + n << endl;
    }
    return 0;
}