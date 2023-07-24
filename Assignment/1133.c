#include <stdio.h>
int main()
{
    int a, b, temp, i;
    scanf("%d%d", &a, &b);
    if (b < a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (i = a + 1; i < b; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}