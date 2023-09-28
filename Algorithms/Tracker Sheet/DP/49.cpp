#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int num[100005];
int lis[100005];
int main()
{
    int k, test = 0;
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
        int ans = *max_element(lis, lis + n - 1);
        if (test != 0)
        {
            cout << endl;
        }
        printf("Test #%d:\n", ++test);
        printf("  maximum possible interceptions: %d\n", ans);
    }
    return 0;
}
