#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {

        sort(a.begin(), a.end());
        int i = 0;
        int j = m - 1;
        int mini = INT_MAX;
        while (j < a.size())
        {
            int diff = a[j] - a[i];
            mini = min(mini, diff);
            i++;
            j++;
        }
        return mini;
    }
};
int main()
{
    fastIO();

    return 0;
}