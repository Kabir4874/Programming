#include <stdio.h>
int main()
{
    while (1)
    {
        long long int n, i, j, m, a, b;
        scanf("%lld", &n);
        if (n == 0)
        {
            break;
        }
        else if (n == 1)
        {
            for (i = 1, a = 1; i <= n; i++, a *= 2)
            {
                for (j = 1, b = a; j <= n; j++, b *= 2)
                {
                    printf("%lld", b);
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (n == 2)
        {
            for (i = 1, a = 1; i <= n; i++, a *= 2)
            {
                for (j = 1, b = a; j <= n; j++, b *= 2)
                {
                    if (j == 1)
                    {
                        printf("%lld", b);
                    }
                    else
                    {
                        printf("%2lld", b);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (n == 3 || n == 4)
        {
            for (i = 1, a = 1; i <= n; i++, a *= 2)
            {
                for (j = 1, b = a; j <= n; j++, b *= 2)
                {
                    if (j == 1)
                    {
                        printf("%2lld", b);
                    }
                    else
                    {
                        printf("%3lld", b);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (n == 5)
        {
            for (i = 1, a = 1; i <= n; i++, a *= 2)
            {
                for (j = 1, b = a; j <= n; j++, b *= 2)
                {
                    if (j == 1)
                    {
                        printf("%3lld", b);
                    }
                    else
                    {
                        printf("%4lld", b);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (n == 6 || n == 7)
        {
            for (i = 1, a = 1; i <= n; i++, a *= 2)
            {
                for (j = 1, b = a; j <= n; j++, b *= 2)
                {
                    if (j == 1)
                    {
                        printf("%4lld", b);
                    }
                    else
                    {
                        printf("%5lld", b);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (n == 8 || n == 9)
        {
            for (i = 1, a = 1; i <= n; i++, a *= 2)
            {
                for (j = 1, b = a; j <= n; j++, b *= 2)
                {
                    if (j == 1)
                    {
                        printf("%5lld", b);
                    }
                    else
                    {
                        printf("%6lld", b);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (n == 10)
        {
            for (i = 1, a = 1; i <= n; i++, a *= 2)
            {
                for (j = 1, b = a; j <= n; j++, b *= 2)
                {
                    if (j == 1)
                    {
                        printf("%6lld", b);
                    }
                    else
                    {
                        printf("%7lld", b);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (n == 11 || n == 12)
        {
            for (i = 1, a = 1; i <= n; i++, a *= 2)
            {
                for (j = 1, b = a; j <= n; j++, b *= 2)
                {
                    if (j == 1)
                    {
                        printf("%7lld", b);
                    }
                    else
                    {
                        printf("%8lld", b);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (n == 13 || n == 14)
        {
            for (i = 1, a = 1; i <= n; i++, a *= 2)
            {
                for (j = 1, b = a; j <= n; j++, b *= 2)
                {
                    if (j == 1)
                    {
                        printf("%8lld", b);
                    }
                    else
                    {
                        printf("%9lld", b);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (n == 15)
        {
            for (i = 1, a = 1; i <= n; i++, a *= 2)
            {
                for (j = 1, b = a; j <= n; j++, b *= 2)
                {
                    if (j == 1)
                    {
                        printf("%9lld", b);
                    }
                    else
                    {
                        printf("%10lld", b);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}