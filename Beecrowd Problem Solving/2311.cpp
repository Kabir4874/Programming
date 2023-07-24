#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        float arr[7], n, sum1 = 0, sum2 = 0;
        cin >> s;
        cin >> n;
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
            sum1 += arr[i];
        }
        float a = 0;
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] > a)
            {
                a = arr[i];
            }
        }
        float b = arr[0];
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] < b)
            {
                b = arr[i];
            }
        }
        sum2 = a + b;
        float ans = (sum1 - sum2) * n;
        cout << s << " " << fixed << setprecision(2) << ans << endl;
    }
    return 0;
}