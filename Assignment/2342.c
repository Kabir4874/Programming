#include <stdio.h>
int main()
{
    int n, a, b, k;
    char ch;
    scanf("%d", &n);
    scanf("%d %c %d", &a, &ch, &b);
    if (ch == '+')
    {
        k = a + b;
        if (k > n)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        }
    }
    if (ch == '*')
    {
        k = a * b;
        if (k > n)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        }
    }
    return 0;
}