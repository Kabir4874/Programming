#include <stdio.h>
int main()
{
    double m[12][12], sum = 0.0;
    int i, j, n = 1, o = 11;
    char c;
    scanf("%c", &c);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    for (i = 11; i > 6; i--)
    {
        for (j = n; j < o; j++)
        {
            sum += m[i][j];
        }
        n++;
        o--;
    }
    if (c == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if (c == 'M')
    {
        printf("%.1lf\n", sum / 30.0);
    }
    return 0;
}