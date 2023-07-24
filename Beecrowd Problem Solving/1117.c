#include <stdio.h>
int main()
{
    int i, j = 0;
    float n, avg, ar[2];
    while (1)
    {
        scanf("%d", &n);
        if (n >= 0 && n <= 10)
        {
            ar[j] = n;
            j++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if (j > 1)
        {
            break;
        }
    }
    avg = (ar[0] + ar[1]) / 2.0;
    printf("media = %.2f\n", avg);
    return 0;
}