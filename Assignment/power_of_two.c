#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("1");
        while (n--)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}