#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch;
    while (n--)
    {
        string s;
        int k;
        cin >> s >> k;
        int x = s.size();
        for (int i = 0; i < x; i++)
        {
            ch = s[i] - k;
            if (ch < 65)
            {
                ch += 26;
            }
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}