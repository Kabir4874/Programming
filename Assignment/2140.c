#include <stdio.h>
int main()
{
    while (1)
    {
        int a, b, c;
        scanf("%d%d", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }
        c = b - a;
        if (c <= 187 && c > 2)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}