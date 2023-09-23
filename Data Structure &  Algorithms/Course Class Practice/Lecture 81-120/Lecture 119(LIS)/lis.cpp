#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    int num[n], lis[n];
    for (int i = 0; i < n; i++)
    {
        lis[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num[i] > num[j])
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
    cout << ans << endl;
    return 0;
}