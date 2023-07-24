#include <stdio.h>
int main()
{
    int t, n, a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            a++;
        }
        if (n % 3 == 0)
        {
            b++;
        }
        if (n % 4 == 0)
        {
            c++;
        }
        if (n % 5 == 0)
        {
            d++;
        }
    }
    printf("%d Multiplo(s) de 2\n", a);
    printf("%d Multiplo(s) de 3\n", b);
    printf("%d Multiplo(s) de 4\n", c);
    printf("%d Multiplo(s) de 5\n", d);
    return 0;
}