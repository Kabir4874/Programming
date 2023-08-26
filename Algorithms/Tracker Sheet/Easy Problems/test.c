#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = n * 2 - 1;
    for (int i = 1; i <= n * 2; i++)
    {

        for (int j = 1; j <= k; j++)
        {
            printf("* ");
        }
        if (i % 2 == 0)
        {
            k -= 2;
        }
        printf("\n");
    }

    return 0;
}