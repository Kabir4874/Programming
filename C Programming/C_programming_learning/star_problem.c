#include <stdio.h>
int main()
{
    int n = 3;
    if (n == 1)
    {
        printf("*\n");
    }
    n = n - 1;
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
    printf("\n");
    return 0;
}