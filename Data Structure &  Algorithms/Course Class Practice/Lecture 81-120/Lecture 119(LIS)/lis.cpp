#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int find_lis(vector<int> a)
{
    vector<int> dp;
    for (int i : a)
    {
        int pos = lower_bound(dp.begin(), dp.end(), i) - dp.begin();
        if (pos == dp.size())
        {
            dp.push_back(i);
        }
        else
        {
            dp[pos] = i;
        }
    }
    return dp.size();
}
int main()
{
    int n;
    cin >> n;

    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int ans = find_lis(num);
    cout << ans << endl;
    return 0;
}
