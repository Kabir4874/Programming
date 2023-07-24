#include <stdio.h>
int main()
{
    int t, n, c = 0, r = 0, s = 0, sum = 0;
    char ch;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %c", &n, &ch);
        sum += n;
        if (ch == 'C')
        {
            c += n;
        }
        else if (ch == 'R')
        {
            r += n;
        }
        else if (ch == 'S')
        {
            s += n;
        }
    }
    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (float)(100 * c) / sum);
    printf("Percentual de ratos: %.2f %%\n", (float)(100 * r) / sum);
    printf("Percentual de sapos: %.2f %%\n", (float)(100 * s) / sum);
    return 0;
}