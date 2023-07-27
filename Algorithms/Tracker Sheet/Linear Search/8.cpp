#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int min = 99, max = 0;
        while (n--)
        {
            cin >> k;
            if (min > k)
            {
                min = k;
            }
            if (max < k)
            {
                max = k;
            }
        }
        cout << (max - min) * 2 << endl;
    }
    return 0;
}