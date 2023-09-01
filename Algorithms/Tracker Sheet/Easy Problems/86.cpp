#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    string s;
    cin >> n >> s;
    string ans;
    int count = 0, i = 0, k = 0;
    while (i < n)
    {
        ans[k] = s[i];
        k++;
        count++;
        i += count;
    }
    for (int i = 0; i < k; i++)
    {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}