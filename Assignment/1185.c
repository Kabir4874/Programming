#include <stdio.h>
int main()
{
    float arr[12][12], sum = 0;
    char c[2];
    int i, j, n = 1, k = 11;
    float avg;
    scanf("%c", &c);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }
    for (i = 10; i >= 0; i--)
    {
        for (j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        n++;
    }
    if (c[0] == 'S')
    {
        printf("%.1f\n", sum);
    }
    else if (c[0] == 'M')
    {
        printf("%.1f\n", sum / 66.0);
    }

    return 0;
}