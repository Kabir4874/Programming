#include <stdio.h>
int main()
{
    int i, count = 0;
    float x, sum = 0;
    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &x);
        if (x > 0)
        {
            sum = sum + x;
            count++;
        }
    }
    float avg = sum / count;
    printf("%d valores positivos\n", count);
    printf("%.1f", avg);

    return 0;
}