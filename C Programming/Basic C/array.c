#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b < c)
    {
        printf("%d eh o maior\n", c);
    }
    else if (b < c < a)
    {
        printf("%d eh o maior\n", a);
    }
    else
    {
        printf("%d eh o maior\n", b);
    }
    return 0;
}