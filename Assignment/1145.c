#include <stdio.h>
int main()
{
    int i, j = 0, a, b;
    scanf("%d%d", &a, &b);
    for (i = 1; i <= b; i++)
    {
        j++;
        if (a == j)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
        if (a == j)
        {
            printf("\n");
            j = 0;
        }
    }
    return 0;
}