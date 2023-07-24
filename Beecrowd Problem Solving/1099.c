#include <stdio.h>
int main()
{
    int i, j, tmp, a, b, n, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        if (a % 2 == 0)

            a--;
        a = a + 2;

        for (j = a; j < b; j = j + 2)
        {
            sum = sum + j;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}