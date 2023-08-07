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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int a, b;
        printf("Case %d:\n", i++);
        for (int i = 0; i < q; i++)
        {
            scanf("%d %d", &a, &b);
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] >= a && arr[j] <= b)
                {
                    count++;
                }
            }
            printf("%d\n", count);
        }
    }
    return 0;
}