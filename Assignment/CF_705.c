#include <stdio.h>
int main()
{

    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("I love ");
        }
        else
        {
            printf("I hate ");
        }
        if (i != n)
        {
            printf("that ");
        }
        else
        {
            printf("it ");
        }
    }

    return 0;
}