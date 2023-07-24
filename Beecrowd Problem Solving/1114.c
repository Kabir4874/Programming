#include <stdio.h>
int main()
{
    int n, i;
    for (i = 0; i < 100000; i++)
    {
        scanf("%d", &n);
        if (n != 2002)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
            break;
        }
    }
    return 0;
}