#include <stdio.h>
int main()
{
    int n, i, a = 0, count;
    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &n);

        if (n > a)
        {
            a = n;
            count = i;
        }
    }
    printf("%d\n", a);
    printf("%d\n", count);
    return 0;
}