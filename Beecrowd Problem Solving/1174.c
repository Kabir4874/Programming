#include <stdio.h>
int main()
{
    int i;
    float r[100];
    for (i = 0; i < 100; i++)
    {
        scanf("%f", &r[i]);
    }
    for (i = 0; i < 100; i++)
    {
        if (r[i] <= 10)
        {
            printf("A[%d] = %.1f\n", i, r[i]);
        }
    }
    return 0;
}