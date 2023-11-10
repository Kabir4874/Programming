#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();

    string s, t;
    cin >> s >> t;
    for (int i = 0; i < 26; ++i)
    {
        string k = s;
        for (char &c : k)
        {
            c = (c - 'a' + i) % 26 + 'a';
        }
        if (k == t)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}