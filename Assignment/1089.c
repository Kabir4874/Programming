#include <stdio.h>
int main()
{
    int n, i, first, middle, last, result, p1, p2;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        result = 0;
        scanf("%d %d", &first, &middle);
        if (n == 2)
        {
            if (first != middle)
            {
                result = 2;
            }
        }
        else
        {
            p1 = first;
            p2 = middle;
            for (i = 2; i < n; i++)
            {
                scanf("%d", &last);
                if ((middle > first && middle > last) || (middle < first && middle < last))
                {
                    result++;
                }
                first = middle;
                middle = last;
            }
            if ((p1 > p2 && p1 > last) || (p1 < p2 && p1 < last))
            {
                result++;
            }
            if ((last > first && last > p1) || (last < first && last < p1))
            {
                result++;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}