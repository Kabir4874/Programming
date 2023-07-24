#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, n5, avg;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    avg = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    printf("Media: %.1f\n", avg);
    if (avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        if ((n5 + avg) / 2.0 >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (n5 + avg) / 2);
    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}