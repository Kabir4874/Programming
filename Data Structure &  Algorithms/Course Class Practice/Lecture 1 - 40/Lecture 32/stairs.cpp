#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int stairs(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    return stairs(n - 1) + stairs(n - 2);
}
int main()
{
    int n;
    cin >> n;
    int ans = stairs(n);
    cout << ans << endl;
    return 0;
}