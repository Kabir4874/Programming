#include <stdio.h>
int main()
{
    int x, e = 0, o = 0, p = 0, n = 0, i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            e++;
        }
        if (x % 2 != 0)
        {
            o++;
        }
        if (x > 0)
        {
            p++;
        }
        if (x < 0)
        {
            n++;
        }
    }
    printf("%d valor(es) par(es)\n", e);
    printf("%d valor(es) impar(es)\n", o);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", n);
    return 0;
}