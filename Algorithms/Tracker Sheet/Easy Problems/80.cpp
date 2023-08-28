#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x = int(a[i]) - 48;
        int y = int(b[i]) - 48;
        int temp;
        if (x < y)
        {
            temp = 9 - y + x + 1;
        }
        else
        {

            temp = 9 - x + y + 1;
        }
        int k = abs(x - y);
        if (temp < k)
        {
            ans += temp;
        }
        else
        {
            ans += k;
        }
    }
    cout << ans << endl;
    return 0;
}