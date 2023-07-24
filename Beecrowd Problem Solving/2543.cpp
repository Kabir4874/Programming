#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, l;
    while (cin >> t >> l)
    {
        int a, b, count = 0;
        while (t--)
        {
            cin >> a >> b;
            if (a == l && b == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}