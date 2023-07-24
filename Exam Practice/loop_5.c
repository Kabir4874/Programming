#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    float avg;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        sum += n;
    }
    avg = sum / 10.0;
    printf("Sum = %d\n", sum);
    printf("Average = %f\n", avg);
    return 0;
}