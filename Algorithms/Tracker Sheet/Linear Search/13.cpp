#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int start = 0, end = s.length() - 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                start = i;
                break;
            }
        }
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                end = i;
                break;
            }
        }
        bool ans = true;
        for (int i = start; i <= end; i++)
        {
            if (s[i] == '0')
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}