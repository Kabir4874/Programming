#include <stdio.h>
int main()
{
    int i;
    printf("Multiple of 3:\n");
    for (i = 1; i <= 50; i++)
    {
        printf("%d\n", i * 3);
    }
    printf("Multiple of 5:\n");
    for (i = 1; i <= 50; i++)
    {
        printf("%d\n", i * 5);
    }
    return 0;
}