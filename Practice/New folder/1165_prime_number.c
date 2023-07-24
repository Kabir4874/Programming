#include <stdio.h>
int main()
{
    int n, a, b, i, count = 0;
    scanf("%d", &a);
    while (a--)
    {
        scanf("%d", &n);
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d eh primo\n", n);
        }
        else
        {
            printf("%d nao eh primo\n", n);
        }
        count = 0;
    }
    return 0;
}