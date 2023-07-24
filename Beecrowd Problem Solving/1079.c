#include <stdio.h>
int main()
{
    int i, x;
    float a, b, c, sum, avg;
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%f%f%f", &a, &b, &c);
        sum = (a * 2) + (b * 3) + (c * 5);
        avg = sum / (2 + 3 + 5);
        printf("%.1f\n", avg);
    }
    return 0;
}