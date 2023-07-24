#include <stdio.h>
int main()
{
    int i, j = 0, x;
    float n, avg, ar[2];
    while (1)
    {
        j = 0;
        while (1)
        {
            scanf("%f", &n);
            if (n >= 0 && n <= 10)
            {
                ar[j] = n;
                j++;
            }
            else
            {
                printf("nota invalida\n");
            }
            if (j == 2)
            {
                avg = (ar[0] + ar[1]) / 2.0;
                printf("media = %.2f\n", avg);
                break;
            }
        }
        while (1)
        {
            scanf("%d", &x);
            printf("novo calculo (1-sim 2-nao)\n");
            if (x == 1 || x == 2)
            {
                break;
            }
        }
        if (x == 1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}