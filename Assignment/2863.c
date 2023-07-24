#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        float a, x;
        int i;
        scanf("%f", &a);
        x = a;
        for (i = 1; i < n; i++)
        {
            scanf("%f", &a);
            if (x > a)
            {
                x = a;
            }
        }
        printf("%.2f\n", x);
    }
    return 0;
}