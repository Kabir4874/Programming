#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        if (x == 1)
        {
            cout << endl;
        }
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            if (l < s[i].size())
            {
                l = s[i].size();
            }
        }

        for (int i = 0; i < n; i++)
        {
            int k = s[i].size();
            for (int j = k; j < l; j++)
            {
                cout << " ";
            }
            cout << s[i] << endl;
        }
        x = 1;
    }
    return 0;
}