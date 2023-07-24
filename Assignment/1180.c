#include <stdio.h>
int main()
{
    int t, n, a, count;
    scanf("%d", &t);
    a = 1000;
    int i;
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (n < a)
        {
            a = n;
            count = i;
        }
    }
    printf("Menor valor: %d\n", a);
    printf("Posicao: %d\n", count);

    return 0;
}