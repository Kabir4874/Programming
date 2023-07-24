#include <stdio.h>
int main()
{
    int n, i, j, k, s, p;
    while (scanf("%d", &n) != EOF)
    {
        int x = (n / 2) + 1;
        for (i = 1; i <= x; i++)
        {
            for (j = i; j <= n / 2; j++)
            {
                printf(" ");
            }
            s = 2 * i - 1;
            for (k = 1; k <= s; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        int count = 1;
        while (count <= 2)
        {
            for (i = count; i <= n / 2; i++)
            {
                printf(" ");
            }
            p = 2 * count - 1;
            for (j = 1; j <= p; j++)
            {
                printf("*");
            }
            printf("\n");
            count++;
        }
        printf("\n");
    }
    return 0;
}