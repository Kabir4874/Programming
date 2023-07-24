#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char ch[100];
    while (1)
    {
        scanf("%d", &t);
        if (t == 0)
        {
            break;
        }
        int sum = 0;
        while (t--)
        {
            int n, k = 0;

            scanf("%d", &n);
            getchar();
            gets(ch);
            if (!strcmp(ch, "suco de laranja"))
            {
                k = n * 120;
                sum += k;
            }
            else if (!strcmp(ch, "morango fresco"))
            {
                k = n * 85;
                sum += k;
            }
            else if (!strcmp(ch, "mamao"))
            {
                k = n * 85;
                sum += k;
            }
            else if (!strcmp(ch, "goiaba vermelha"))
            {
                k = n * 70;
                sum += k;
            }
            else if (!strcmp(ch, "manga"))
            {
                k = n * 56;
                sum += k;
            }
            else if (!strcmp(ch, "laranja"))
            {
                k = n * 50;
                sum += k;
            }
            else if (!strcmp(ch, "brocolis"))
            {
                k = n * 34;
                sum += k;
            }
        }
        if (sum >= 110 && sum <= 130)
        {
            printf("%d mg\n", sum);
        }
        else if (sum < 110)
        {
            printf("Mais %d mg\n", 110 - sum);
        }
        else if (sum > 130)
        {
            printf("Menos %d mg\n", sum - 130);
        }
    }

    return 0;
}