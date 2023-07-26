#include <stdio.h>
int main()
{
    int t, b, p, f, h, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d", &b, &p, &f);
        scanf("%d%d", &h, &c);
        int count1 = 0, count2 = 0;
        if (h < c)
        {
            while (f != 0)
            {
                if (b < 2)
                {
                    break;
                }
                b -= 2;
                f--;
                count2++;
            }
            while (p != 0)
            {
                if (b < 2)
                {
                    break;
                }
                b -= 2;
                p--;
                count1++;
            }
        }
        else
        {

            while (p != 0)
            {
                if (b < 2)
                {
                    break;
                }
                b -= 2;
                p--;
                count1++;
            }
            while (f != 0)
            {
                if (b < 2)
                {
                    break;
                }
                b -= 2;
                f--;
                count2++;
            }
        }
        printf("%d\n", (count1 * h) + (count2 * c));
    }

    return 0;
}