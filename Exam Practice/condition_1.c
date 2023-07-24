#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("%d is maximum\n", a);
        printf("%d is minimum\n", b);
    }
    else
    {
        printf("%d is maximum\n", b);
        printf("%d is minimum\n", a);
    }
    return 0;
}