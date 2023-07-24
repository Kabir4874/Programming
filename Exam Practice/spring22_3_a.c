#include <stdio.h>
int main()
{
    int n, sum = 0, i, a;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        sum += a;
    }
    printf("Total Value is %d\n", sum);
    return 0;
}