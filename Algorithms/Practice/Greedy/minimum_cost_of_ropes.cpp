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
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n)
    {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
        }
        long long cost = 0;
        while (pq.size() > 1)
        {
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            long long mergedLength = first + second;
            cost = cost + mergedLength;
            pq.push(mergedLength);
        }
        return cost;
    }
};
int main()
{
    fastIO();

    return 0;
}