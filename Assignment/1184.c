#include <stdio.h>
int main()
{
    double arr[12][12], sum = 0;
    int i, j, n = 1;
    char c;
    scanf("%c", &c);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    for (i = 0; i < 12; i++)
    {
        for (j = n; j < 12; j++)
        {
            sum += arr[j][i];
        }
        n++;
    }
    if (c == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if (c == 'M')
    {
        printf("%.1lf\n", sum / 66.0);
    }
    return 0;
}