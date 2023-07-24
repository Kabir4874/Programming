#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char ch1[20], ch2[20];
    scanf("%d", &t);
    int i;
    for (i = 1; i <= t; i++)
    {
        scanf("%s %s", &ch1, &ch2);

        if (!strcmp(ch1, ch2))
        {
            printf("Caso #%d: De novo!\n", i);
        }
        else if (!strcmp(ch1, "pedra"))
        {
            if (!strcmp(ch2, "lagarto") || !strcmp(ch2, "tesoura"))
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else if (!strcmp(ch2, "papel") || !strcmp(ch2, "Spock"))
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        }
        else if (!strcmp(ch1, "papel"))
        {
            if (!strcmp(ch2, "pedra") || !strcmp(ch2, "Spock"))
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else if (!strcmp(ch2, "lagarto") || !strcmp(ch2, "tesoura"))
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        }
        else if (!strcmp(ch1, "tesoura"))
        {
            if (!strcmp(ch2, "papel") || !strcmp(ch2, "lagarto"))
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else if (!strcmp(ch2, "Spock") || !strcmp(ch2, "pedra"))
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        }
        else if (!strcmp(ch1, "lagarto"))
        {
            if (!strcmp(ch2, "papel") || !strcmp(ch2, "Spock"))
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else if (!strcmp(ch2, "pedra") || !strcmp(ch2, "tesoura"))
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        }
        else if (!strcmp(ch1, "Spock"))
        {
            if (!strcmp(ch2, "pedra") || !strcmp(ch2, "tesoura"))
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else if (!strcmp(ch2, "lagarto") || !strcmp(ch2, "papel"))
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        }
    }

    return 0;
}