#include <stdio.h>
int main()
{
    int t, n, a, count;
    scanf("%d", &t);
    a = 20;
    int i;
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        if (n < a)
        {
            a = n;
            count = i;
        }
    }
    printf("%d\n", count);

    return 0;
}