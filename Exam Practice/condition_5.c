#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 == 0)
            {
                printf("%d is Leap year\n", n);
            }
            else
            {
                printf("%d is not leap year\n", n);
            }
        }
        else
        {
            printf("%d is Leap year\n", n);
        }
    }
    else
    {
        printf("%d is not leap year\n", n);
    }
    return 0;
}