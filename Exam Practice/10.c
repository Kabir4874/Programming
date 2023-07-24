#include <stdio.h>
int main()
{
    int i, j, a, b, count;
    printf("Range:\n");
    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++)
    {
        count = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count = 0;
                break;
            }
        }
        if (count == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}