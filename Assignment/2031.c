#include <stdio.h>
int main()
{
    int n;
    char ch1[20], ch2[20];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s %s", &ch1, &ch2);
        if (ch1[1] == 't')
        {
            if (ch2[1] == 'e' || ch2[1] == 'a')
            {
                printf("Jogador 1 venceu\n");
            }
            else
            {
                printf("Aniquilacao mutua\n");
            }
        }
        else if (ch1[1] == 'e')
        {
            if (ch2[1] == 'a')
            {
                printf("Jogador 1 venceu\n");
            }
            else if (ch2[1] == 'e')
            {
                printf("Sem ganhador\n");
            }
            else
            {
                printf("Jogador 2 venceu\n");
            }
        }
        else if (ch1[1] == 'a')
        {
            if (ch2[1] == 'a')
            {
                printf("Ambos venceram\n");
            }
            else
            {
                printf("Jogador 2 venceu\n");
            }
        }
    }

    return 0;
}