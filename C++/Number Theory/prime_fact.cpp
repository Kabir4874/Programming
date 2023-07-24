#include <bits/stdc++.h>
using namespace std;
void prime_fact(int n)
{
    int ans = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        ans++;
    }
    cout << ans << endl;
}
int main()
{
    int n;
    cin >> n;
    prime_fact(n);
    return 0;
}