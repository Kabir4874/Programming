#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int num[100005];
int lis[100005];
int main()
{
    int k, test = 1;
    while (1)
    {
        int n = 0;
        while (cin >> num[n++])
        {
            if (num[n - 1] == -1)
            {
                break;
            }
        }
        if (num[0] == -1)
        {
            break;
        }
        for (int i = 0; i < n - 1; i++)
        {
            lis[i] = 1;
        }
        for (int i = 1; i < n - 1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (num[i] < num[j])
                {
                    int nLis = lis[j] + 1;
                    if (nLis > lis[i])
                    {
                        lis[i] = nLis;
                    }
                }
            }
        }
        int ans = *max_element(lis, lis + n);
        cout << "Test #" << test++ << ":" << endl
             << "  maximum possible interceptions: " << ans << endl;
    }
    return 0;
}