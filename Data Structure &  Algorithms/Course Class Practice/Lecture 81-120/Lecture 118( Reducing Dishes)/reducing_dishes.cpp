#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
bool cmp(int &a, int &b)
{
    return a > b;
}
int maxSatisfaction(vector<int> &v)
{
    int ans = 0;
    sort(v.begin(), v.end(), cmp);
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
    int sum = 0;
    for (auto &i : v)
    {
        sum += i;
        ans = max(ans, sum);
    }
    return ans;
}
int main()
{
    fastIO();

    return 0;
}