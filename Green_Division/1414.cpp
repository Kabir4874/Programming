#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    while (1)
    {
        cin >> t >> n;
        if (t == 0 && n == 0)
        {
            break;
        }
        int a = n * 3;
        string s;
        int b = 0, k;
        for (int i = 0; i < t; i++)
        {
            cin >> s >> k;
            b += k;
        }
        cout << a - b << endl;
    }
    return 0;
}