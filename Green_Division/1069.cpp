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
        int k = 0, l = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '<')
            {
                k++;
            }
            if (s[i] == '>')
            {
                if (k > 0)
                {
                    l++;
                    k--;
                }
            }
        }
        cout << l << endl;
    }
    return 0;
}