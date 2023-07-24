#include <stdio.h>
int main()
{
    long long int temp, i, j;
    int ar[100000];
    while (scanf("%lld", &temp) && temp >= 0)
    {
        if (temp == 0)
        {
            printf("0\n");
        }
        else
        {
            i = 1;
            while (temp != 0)
            {
                ar[i++] = temp % 3;
                temp /= 3;
            }
            for (j = i - 1; j > 0; j--)
            {
                printf("%d", ar[j]);
            }
            printf("\n");
        }
    }
    return 0;
}