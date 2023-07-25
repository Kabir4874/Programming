#include <stdio.h>
int main()
{
    int t, n, i = 1;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int remainder, reverse = 0, check = n;
        while (n != 0)
        {
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n /= 10;
        }

        if (check == reverse)
        {
            printf("Case %d: Yes\n", i);
        }
        else
        {
            printf("Case %d: No\n", i);
        }
        i++;
    }

    return 0;
}