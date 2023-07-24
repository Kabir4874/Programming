#include <stdio.h>

int main()
{
    int n, t, k, sum = 1000, count = 1, i;
    char ch;
    scanf("%d ", &t);
    while (t--)
    {
        sum = 1000;
        scanf("%d ", &k);
        for (i = 0; i < k; ++i)
        {
            scanf("%c %d", &ch, &n);
            if (ch == '+')
            {
                sum += n;
            }
            if (ch == '-')
            {
                sum -= n;
            }
            getchar();
        }
        printf("Case %d: %d\n", count, sum);
        count++;
    }

    return 0;
}