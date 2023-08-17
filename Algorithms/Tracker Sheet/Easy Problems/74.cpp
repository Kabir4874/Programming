#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        int k = s.length();
        if (k > 10)
        {
            cout << s[0] << k - 2 << s[k - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}