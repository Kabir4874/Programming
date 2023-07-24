#include <stdio.h>
int main()
{
    int n, sum = 0, a, b, temp, i;
    while (1)
    {
        scanf("%d%d", &a, &b);
        if (a <= 0 || b <= 0)
        {
            break;
        }
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        for (i = a; i <= b; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
        sum = 0;
    }
    return 0;
}