#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, count = 0;
    double a, sum = 0.0;
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &a);
        if (a > 0.0)
        {
            sum += a;
            count++;
        }
    }
    if (count < 2)
    {
        printf("too few numbers\n");
    }
    else
    {
        printf("%lf\n", sum / count);
    }
    return 0;
}