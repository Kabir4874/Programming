#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
// User function Template for C++

class Solution
{
public:
    int minimumDays(int S, int N, int M)
    {
        int sunday = S / 7;
        int buyingDays = S - sunday;
        int totalFood = S * M;
        int ans = 0;
        if (totalFood % N == 0)
        {
            ans = totalFood / N;
        }
        else
        {
            ans = totalFood / N + 1;
        }
        if (ans <= buyingDays)
        {
            return ans;
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
    fastIO();

    return 0;
}