#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    while (scanf("%d", &t) != EOF)
    {
        int i, n, sum = 0;
        for (i = 0; i < t; i++)
        {
            scanf("%d", &n);
            sum += n;
        }
        float k = ceil(t * 0.666);
        int l = (int)k;
        if (sum >= l)
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
    }
    return 0;
}