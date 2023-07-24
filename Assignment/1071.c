#include <stdio.h>
int main()
{
    int a, b, temp, sum = 0, i;
    scanf("%d%d", &a, &b);
    if (b < a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (i = a + 1; i < b; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}