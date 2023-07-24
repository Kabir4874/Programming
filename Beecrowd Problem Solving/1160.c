#include <stdio.h>
int main()
{
    int i, pa, pb, t, j = 0;
    double g1, g2;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while (pa <= pb)
        {
            pa = pa + ((pa * g1) / 100);
            pb = pb + ((pb * g2) / 100);
            j++;
            if (j > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (j <= 100)
        {
            printf("%d anos.\n", j);
        }
        j = 0;
    }
    return 0;
}