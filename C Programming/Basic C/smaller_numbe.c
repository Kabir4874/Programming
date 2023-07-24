#include <stdio.h>
int main()
{
    int a, b, smaller;
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        smaller = a;
    }
    else
    {
        smaller = b;
    }
    printf("The smaller number is: %d", smaller);
    return 0;
}