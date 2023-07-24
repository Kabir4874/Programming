#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, i, count = 0, temp, max;
    cin >> t;
    while (t--)
    {
        count++;
        cin >> a >> b;
        max = (a > b) ? a : b;
        do
        {
            if (max % a == 0 && max % b == 0)
            {
                cout << "Case " << count << ": " << max << endl;
                break;
            }
            else
                ++max;
        } while (true);
    }
    return 0;
}