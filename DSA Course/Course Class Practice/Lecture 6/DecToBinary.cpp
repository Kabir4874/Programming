#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0, i = 1;
    while (n != 0)
    {
        int remainder = n % 2;
        n /= 2;
        ans = ans + remainder * i;
        i *= 10;
    }
    cout << ans;
    return 0;
}