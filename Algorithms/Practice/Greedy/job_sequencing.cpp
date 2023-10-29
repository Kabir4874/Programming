#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
struct job
{
    int id;
    int deadline;
    int profit;
};
bool cmp(job a, job b)
{
    return a.profit > b.profit;
}
vector<int> jobSequencing(job arr[], int n)
{
    sort(arr, arr + n, cmp);
    int maxiD = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxiD = max(maxiD, arr[i].deadline);
    }
    vector<int> schedule(maxiD + 1, -1);
    int cnt = 0;
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int currProfit = arr[i].profit;
        int currJob = arr[i].id;
        int currD = arr[i].deadline;
        for (int k = currD; k > 0; k--)
        {
            if (schedule[k] == -1)
            {
                cnt++;
                maxProfit += currProfit;
                schedule[k] = currJob;
                break;
            }
        }
    }
    vector<int> ans;
    ans.push_back(cnt);
    ans.push_back(maxProfit);
    return ans;
}
int main()
{
    fastIO();

    return 0;
}