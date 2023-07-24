#include <stdio.h>
int main()
{
    int a, x = 0, y = 0, z = 0;
    printf("MUITO OBRIGADO\n");
    while (1)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            x++;
        }
        if (a == 2)
        {
            y++;
        }
        if (a == 3)
        {
            z++;
        }
        if (a == 4)
        {
            break;
        }
    }
    printf("Alcool: %d\n", x);
    printf("Gasolina: %d\n", y);
    printf("Diesel: %d\n", z);
    return 0;
}