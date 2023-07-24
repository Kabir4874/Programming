#include <stdio.h>
int main()
{
    int a, b, c, d, t, n, m, x, y;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        scanf("%d%d", &x, &y);
        while (n--)
        {
            scanf("%d%d", &a, &b);
            if (x == a || y == b)
            {
                printf("divisa\n");
            }
            else if (a > x && b > y)
            {
                printf("NE\n");
            }
            else if (a > x && b < y)
            {
                printf("SE\n");
            }
            else if (a < x && b < y)
            {
                printf("SO\n");
            }
            else if (a < x && b > y)
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}