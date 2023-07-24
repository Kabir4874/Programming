#include <bits/stdc++.h>
using namespace std;
void phi(int n)
{
    int ans = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            ans *= (i - 1);
            ans /= i;
        }
    }
    if (n > 1)
    {
        ans *= (n - 1);
        ans /= n;
    }
    cout << ans << endl;
}
int main()
{
    int n;
    cin >> n;
    phi(n);
    return 0;
}