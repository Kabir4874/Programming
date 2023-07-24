#include <stdio.h>
int main()
{
    int a, b, temp, sum = 0;
    scanf("%d%d", &a, &b);
    if (b < a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    int i = a;
    while (i <= b)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
        i++;
    }
    printf("%d\n", sum);
    return 0;
}