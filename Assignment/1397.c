#include <stdio.h>
int main()
{
    int t, a, b;
    while (1)
    {
        scanf("%d", &t);
        if (t == 0)
        {
            break;
        }
        int count1 = 0, count2 = 0;
        while (t--)
        {
            scanf("%d%d", &a, &b);
            if (a > b)
            {
                count1++;
            }
            else if (b > a)
            {
                count2++;
            }
        }
        printf("%d %d\n", count1, count2);
        }
    return 0;
}