#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    int i = 1;
    int n, q;
    while (t--)
    {
        cin >> n >> q;
        vector<int> arr;
        int k;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &k);
            arr.push_back(k);
        }
        int a, b;
        printf("Case %d:\n", i++);
        for (int i = 0; i < q; i++)
        {
            scanf("%d %d", &a, &b);
            vector<int>::iterator x, y;

            x = lower_bound(arr.begin(), arr.end(), a);
            y = upper_bound(arr.begin(), arr.end(), b);

            printf("%d\n", ((y - arr.begin()) - (x - arr.begin())));
        }
    }
    return 0;
}