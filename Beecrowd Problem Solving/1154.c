#include <stdio.h>
int main()
{
    int n, b = 0;
    double c, i = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        else
        {
            b += n;
            i++;
        }
    }
    c = b / i;
    printf("%.2lf\n", c);
    return 0;
}