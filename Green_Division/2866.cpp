#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    getchar();
    while (t--)
    {
        cin >> s;
        int n = s.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}