#include <stdio.h>
int main()
{
    int i;
    for (i = 2; i <= 100; i = i + 2)
    {
        printf("%d\n", i);
        printf("%d\n", i + 1);
    }
    return 0;
}