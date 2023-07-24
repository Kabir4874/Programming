#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if (n >= 0 && n <= 400.00)
    {
        printf("Novo salario: %.2f\n", n + n * 0.15);
        printf("Reajuste ganho: %.2f\n", n * 0.15);
        printf("Em percentual: %d %%\n", 15);
    }
    else if (n >= 400.01 && n <= 800.00)
    {
        printf("Novo salario: %.2f\n", n + n * 0.12);
        printf("Reajuste ganho: %.2f\n", n * 0.12);
        printf("Em percentual: %d %%\n", 12);
    }
    else if (n >= 800.01 && n <= 1200.00)
    {
        printf("Novo salario: %.2f\n", n + n * 0.10);
        printf("Reajuste ganho: %.2f\n", n * 0.10);
        printf("Em percentual: %d %%\n", 10);
    }
    else if (n >= 1200.01 && n <= 2000.00)
    {
        printf("Novo salario: %.2f\n", n + n * 0.07);
        printf("Reajuste ganho: %.2f\n", n * 0.07);
        printf("Em percentual: %d %%\n", 7);
    }
    else if (n > 2000.00)
    {
        printf("Novo salario: %.2f\n", n + n * 0.04);
        printf("Reajuste ganho: %.2f\n", n * 0.04);
        printf("Em percentual: %d %%\n", 4);
    }
    return 0;
}