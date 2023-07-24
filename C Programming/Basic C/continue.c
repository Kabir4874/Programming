#include <stdio.h>
int main()
{
    int a = 15;
    int i = 0;
    while (i < 20)
    {
        i++;
        if (i != a)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}