#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
#define MOD 1000000007

int countDistinctWays(int nStairs)
{
    int step1 = 1;

    int step2 = 1;

    int n = -1;

    for (int i = 2; i <= nStairs; i++)
    {

        n = (step1 + step2) % MOD;

        step2 = step1;

        step1 = n;
    }

    return step1;
}

int main()
{
    fastIO();

    return 0;
}