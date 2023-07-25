#include <stdio.h>
int main()
{
    int t, a, b, i = 1;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if (a <= b)
        {
            printf("Case %d: %d\n", i, 4 * b + 19);
        }
        else
        {
            int k = a - b;
            printf("Case %d: %d\n", i, (a + k) * 4 + 19);
        }
        i++;
    }

    return 0;
}