#include <stdio.h>
int main()
{
    int i, a, b, n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &a, &b);
        if (b == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n", (float)a / b);
        }
    }
    return 0;
}