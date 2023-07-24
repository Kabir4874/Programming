#include <stdio.h>
int main()
{
    double sum = 0, m[12][12];
    int n = 1, o = 11, i, j;
    char c;
    scanf("%c", &c);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = n; j < o; j++)
        {
            sum += m[j][i];
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