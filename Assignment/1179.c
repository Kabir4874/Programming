#include <stdio.h>
int main()
{
    int p[5], im[5], a = 0, b = 0, c, n, i, j, k, l;
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            p[a] = n;
            a++;
            if (a == 5)
            {
                for (j = 0; j < 5; j++)
                {
                    printf("par[%d] = %d\n", j, p[j]);
                    p[j] = 0;
                    a = 0;
                }
            }
        }
        else
        {
            im[b] = n;
            b++;
            if (b == 5)
            {
                for (j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n", j, im[j]);
                    im[j] = 0;
                    b = 0;
                }
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (im[i] == 0)
        {
            break;
        }
        printf("impar[%d] = %d\n", i, im[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (p[i] == 0)
        {
            break;
        }
        printf("par[%d] = %d\n", i, p[i]);
    }
    return 0;
}