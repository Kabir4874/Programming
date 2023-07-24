#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    int count = 0;
    while (1)
    {
        count++;
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        scanf("%d %d", &b, &c);
        float t_area = a * 2;
        float p_area = sqrt(pow(b, 2) + pow(c, 2));
        if (t_area >= p_area)
        {
            printf("Pizza %d fits on the table.\n", count);
        }
        else
        {
            printf("Pizza %d does not fit on the table.\n", count);
        }
    }

    return 0;
}