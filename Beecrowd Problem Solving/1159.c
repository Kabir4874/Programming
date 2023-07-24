#include <stdio.h>
int main()
{
    int n, i, k = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        if (n % 2 != 0)
        {
            n++;
        }
        for (i = 1; i <= 5; i++)
        {
            k = k + n;
            n = n + 2;
        }
        printf("%d\n", k);
        k = 0;
        n = 0;
    }
    return 0;
}