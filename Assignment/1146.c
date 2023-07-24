#include <stdio.h>
int main()
{
    while (1)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        int i;
        for (i = 1; i < n; i++)
        {
            printf("%d ", i);
        }
        printf("%d\n", i);
    }
    return 0;
}