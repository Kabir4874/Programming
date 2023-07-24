#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    for (int i = 0; i < 4; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    int m = v[0] + v[3];
    int l = v[1] + v[2];
    int ans;
    if (m > l)
    {
        ans = m - l;
    }
    else
    {
        ans = l - m;
    }
    cout << ans << endl;

    return 0;
}