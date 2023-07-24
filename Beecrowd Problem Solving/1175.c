#include <stdio.h>
int main()
{
    int i;
    int r[20];
    for (i = 19; i >= 0; i--)

    {
        scanf("%d", &r[i]);
    }
    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, r[i]);
    }
    return 0;
}