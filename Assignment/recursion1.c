#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    for (i = n - 1; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}