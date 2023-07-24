#include <stdio.h>
int main()
{
    int a, b, c, n, i, j;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        int arr[12];
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        printf("Case %d: %d\n", i, arr[n / 2]);
    }
    return 0;
}