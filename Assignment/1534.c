#include <stdio.h>
int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int arr[n][n], i, j;
        int k = n - 1;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j)
                {
                    arr[i][j] = 1;
                }
                else
                {
                    arr[i][j] = 3;
                }
                if (j == k)
                {
                    arr[i][j] = 2;
                }
            }
            k--;
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}