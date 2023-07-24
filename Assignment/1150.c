#include <stdio.h>
int main()
{
    int x, z, count = 1, sum = 0, i;
    scanf("%d%d", &x, &z);
    while (z <= x)
    {
        scanf("%d", &z);
    }
    for (i = x; i <= z; i++)
    {
        sum += i;
        if (sum > z)
        {
            break;
        }
        count++;
    }
    printf("%d\n", count);

    return 0;
}