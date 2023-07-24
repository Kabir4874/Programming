#include <stdio.h>
int main()
{
    int a, b, c, d, e, n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        while (n--)
        {
            int tmp = 0;
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
            if (a <= 127)
            {
                tmp++;
                a = 1;
            }
            else
            {
                a = 0;
            }
            if (b <= 127)
            {
                tmp++;
                b = 1;
            }
            else
            {
                b = 0;
            }
            if (c <= 127)
            {
                tmp++;
                c = 1;
            }
            else
            {
                c = 0;
            }
            if (d <= 127)
            {
                tmp++;
                d = 1;
            }
            else
            {
                d = 0;
            }
            if (e <= 127)
            {
                tmp++;
                e = 1;
            }
            else
            {
                e = 0;
            }
            if (tmp == 1)
            {
                if (a == 1)
                {
                    printf("A\n");
                }
                if (b == 1)
                {
                    printf("B\n");
                }
                if (c == 1)
                {
                    printf("C\n");
                }
                if (d == 1)
                {
                    printf("D\n");
                }
                if (e == 1)
                {
                    printf("E\n");
                }
            }
            else
            {
                printf("*\n");
            }
        }
    }
    return 0;
}