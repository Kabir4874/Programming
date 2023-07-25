#include <stdio.h>
int main()
{
    int t, b, p, f, h, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d", &b, &p, &f);
        scanf("%d%d", &h, &c);
        int ans = 0;
        while (b > 1)
        {
            if (h < c)
            {
                if (f * 2 <= b)
                {
                    b = b - f * 2;
                    ans += (f * 2) * c;
                }
                if (p * 2 <= b)
                {
                    b = b - p * 2;
                    ans += (p * 2) * h;
                }
            }
        }
    }

    return 0;
}