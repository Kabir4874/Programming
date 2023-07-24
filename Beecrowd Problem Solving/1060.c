#include <stdio.h>
int main()
{
    int i, sum = 0;
    float x;
    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &x);
        if (x > 0)
        {
            sum++;
        }
    }
    printf("%d valores positivos\n", sum);
    return 0;
}