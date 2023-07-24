#include <stdio.h>
int main()
{
    int a, b, c, i = 0, g = 0, d = 0, m = 0;
place:
    scanf("%d%d", &a, &b);
    m++;
    if (a > b)
    {
        i++;
    }
    else if (a == b)
    {
        d++;
    }
    else
    {
        g++;
    }
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &c);
    if (c == 1)
    {
        goto place;
    }
    printf("%d grenais\n", m);
    printf("Inter:%d\n", i);
    printf("Gremio:%d\n", g);
    printf("Empates:%d\n", d);
    if (i > g)
    {
        printf("Inter venceu mais\n");
    }
    else if (i == g)
    {
        printf("Não houve vencedor\n");
    }
    else
    {
        printf("Gremio venceu mais\n");
    }
    return 0;
}