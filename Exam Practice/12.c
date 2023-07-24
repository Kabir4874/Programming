#include <stdio.h>
int main()
{
    long long int i, n;
    scanf("%d", &n);
    while (n > 0)
    {
        int last_digit = n % 10;
        if (last_digit == 1)
        {
            continue;
        }
        if (last_digit == 5)
        {
            printf("There is a RED number\n");
            break;
        }
        printf("%d\n", last_digit);
        n = n / 10;
    }
    return 0;
}