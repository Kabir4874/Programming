#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i = 0;
    cin >> t;
    while (t--)
    {
        int max = 0, k;
        cin >> n;
        while (n--)
        {
            cin >> k;
            if (k > max)
            {
                max = k; 
            }
        }
        i++;
        cout << "Case " << i << ": " << max << endl;
    }
    return 0;
}