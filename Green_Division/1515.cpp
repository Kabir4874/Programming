#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        string s, s1;
        int a, b, k;
        int x = 10000000;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> a >> b;
            k = a - b;
            if (k < x)
            {
                x = k;
                s1 = s;
            }
        }
        cout << s1 << endl;
    }
    return 0;
}