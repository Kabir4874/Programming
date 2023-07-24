#include <stdio.h>
int main()
{
    int a, b, c, s,k=0;
    double area;
    for (;;)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        scanf("%d%d", &b, &c);
        area =( a * b * 100.0) / c;
        for (s = 1; s*s<= area; s++){
            k++;
        }
        printf("%d\n", k);
        k=0;
    }

    return 0;
}