#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
        if (i == n)
        {
            break;
        }
    }
    return 0;
}