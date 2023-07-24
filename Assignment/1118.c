#include <stdio.h>
int main()
{
    int j = 0, n;
    float x, ar[2], avg;
    while (1)
    {
        j = 0;
        while (1)
        {
            scanf("%f", &x);
            if (x >= 0 && x <= 10)
            {
                ar[j] = x;
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
            scanf("%d", &n);
            printf("novo calculo (1-sim 2-nao)\n");
            if (n == 1 || n == 2)
            {
                break;
            }
        }
        if (n == 1)
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