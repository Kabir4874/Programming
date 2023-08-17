#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string Reverse(string s, int l, int h)
{
    if (l > h)
    {
        return s;
    }
    swap(s[l], s[h]);
    l++;
    h--;
    return Reverse(s, l, h);
}
int main()
{
    string s;
    cin >> s;
    int l = 0, h = s.length() - 1;
    string ans = Reverse(s, l, h);
    cout << ans << endl;
    return 0;
}