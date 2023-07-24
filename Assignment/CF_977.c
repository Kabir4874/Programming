#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld%lld", &a, &b);
    int i;
    for (i = 0; i < b; i++)
    {
        c = a % 10;
        if (c == 0)
        {
            a = a / 10;
        }
        else if (c != 0)
        {
            a = a - 1;
        }
    }
    printf("%d\n", a);

    return 0;
}