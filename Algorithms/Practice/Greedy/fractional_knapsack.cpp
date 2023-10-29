#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
bool cmp(pair<float, int> a, pair<float, int> b)
{
    return a.first > b.first;
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    vector<int> price(n), weight(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    int ks;
    cin >> ks;
    vector<pair<float, int>> ans;
    for (int i = 0; i < n; i++)
    {
        double unit = (1.0 * price[i]) / weight[i];
        ans.push_back(make_pair(unit, weight[i]));
    }
    sort(ans.begin(), ans.end(), cmp);
    float total = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (ans[i].second > ks)
        {
            total += ks * ans[i].first;
            // ks = 0;
            break;
        }
        else
        {
            total += ans[i].first * ans[i].second;
            ks -= ans[i].second;
        }
    }
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}