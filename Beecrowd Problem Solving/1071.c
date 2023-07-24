#include <stdio.h>
int main()
{
    int a, b, i, sum = 0;
    int min, max;
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }
    for (i = (min + 1); i < max; ++i)
    {
        if (i % 2 != 0)
        {

            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}