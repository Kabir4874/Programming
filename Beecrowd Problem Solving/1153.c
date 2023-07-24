#include <stdio.h>
int main()
{
    int n, a = 1, i;
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        a = a * i;
    }
    printf("%d\n", a);
    return 0;
}