#include <stdio.h>
int main()
{
    int i, sum = 0;
    int x;
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            sum++;
        }
    }
    printf("%d valores pares\n", sum);
    return 0;
}