#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if (n >= 0 && n <= 400)
    {
        float per = (n * 15) / 100;
        printf("Novo salario: %.2f\n", n + per);
        printf("Reajuste ganho: %.2f\n", per);
        printf("Em percentual: 15 %%\n");
    }
    else if (n > 400 && n <= 800)
    {
        float per = (n * 12) / 100;
        printf("Novo salario: %.2f\n", n + per);
        printf("Reajuste ganho: %.2f\n", per);
        printf("Em percentual: 12 %%\n");
    }
    else if (n > 800 && n <= 1200)
    {
        float per = (n * 10) / 100;
        printf("Novo salario: %.2f\n", n + per);
        printf("Reajuste ganho: %.2f\n", per);
        printf("Em percentual: 10 %%\n");
    }
    else if (n > 1200 && n <= 2000)
    {
        float per = (n * 7) / 100;
        printf("Novo salario: %.2f\n", n + per);
        printf("Reajuste ganho: %.2f\n", per);
        printf("Em percentual: 7 %%\n");
    }
    else if (n > 2000)
    {
        float per = (n * 4) / 100;
        printf("Novo salario: %.2f\n", n + per);
        printf("Reajuste ganho: %.2f\n", per);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}