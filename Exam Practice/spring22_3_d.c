#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i, j;
    for (i = a; i <= b; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}