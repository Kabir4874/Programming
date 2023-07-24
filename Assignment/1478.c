#include <stdio.h>
int main()
{
    while (1)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        int arr[n][n];
        int i, j, k, l, m, a, b;
        for (i = 0; i < n; i++)
        {
            a = i + 1;
            b = 2;
            for (j = 0; j <= i; j++, a--)
            {
                arr[i][j] = a;
            }
            for (j = i + 1; j < n; j++, b++)
            {
                arr[i][j] = b;
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    printf("%3d", arr[i][j]);
                }
                else
                {
                    printf("%4d", arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}