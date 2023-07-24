#include <stdio.h>
int main()
{
    int i, j, n, k, m = 0;
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        scanf("%d", &n);
        for (j = 1; j < n; j++)
        {
            if (n % j == 0)
            {
                m += j;
            }
        }
        if (m == n)
        {
            printf("%d eh perfeito\n", n);
        }
        else
        {
            printf("%d nao eh perfeito\n", n);
        }
        m = 0;
    }
    return 0;
}