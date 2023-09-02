#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ull a, b;
        cin >> a >> b;
        ll cnt = 0, temp;
        while (a != 0)
        {
            if (a % b == 0)
            {
                a /= b;
                cnt++;
            }
            else
            {
                temp = a % b;
                cnt += temp;
                a -= temp;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}