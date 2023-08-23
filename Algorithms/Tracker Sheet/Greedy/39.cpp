#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int func(string s, int n)
{
    int count = 0;
    for (int i = 0; i < n;)
    {
        if (s[i] == '.')
        {
            count++;
            i += 3;
        }
        else
        {
            i++;
        }
    }
    return count;
}
int main()
{
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = func(s, n);
        cout << "Case " << i++ << ": " << ans << endl;
    }
    return 0;
}