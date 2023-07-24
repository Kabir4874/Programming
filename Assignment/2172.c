#include <stdio.h>
int main()
{
    while (1)
    {
        long long int a, b, c;
        scanf("%lld%lld", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }
        c = a * b;
        printf("%lld\n", c);
    }
    return 0;
}