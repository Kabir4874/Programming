#include <stdio.h>
int main()
{
    int i, j, k, n, m;
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        scanf("%d", &n);
        if (n == 1 || n == 2)
        {
            printf("%d eh primo\n", n);
        }
        else if (n > 2)
        {
            for (j = 2; j < n; j++)
            {
                if (n % j == 0)
                {
                    m = 1;
                    break;
                }
                else
                {
                    m = 2;
                }
            }
        }
        if (m == 1)
        {
            printf("%d nao eh primo\n", n);
        }
        else if (m == 2)
        {
            printf("%d eh primo\n", n);
        }
        m = 0;
    }
    return 0;
}