#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int i;
    for (i = 1; i <= 10; i++)
    {
        scanf("%s", &name);
        if (i == 3)
        {
            printf("%s\n", name);
        }
        if (i == 7)
        {
            printf("%s\n", name);
        }
        if (i == 9)
        {
            printf("%s\n", name);
        }
    }
    return 0;
}