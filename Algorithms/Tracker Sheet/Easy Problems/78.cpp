#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (a != b)
    {
        if (a < b)
        {
            if (b % 2 == 0)
            {
                b /= 2;
                ans++;
            }
            else
            {
                b++;
                ans++;
            }
        }
        else
        {
            b++;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}