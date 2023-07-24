#include <stdio.h>
int main()
{
    int n, arr[10], i = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        int k = n % 10;
        if (k % 2 == 1)
        {
            arr[i] = k;
            i++;
        }
        n /= 10;
    }
    int j;
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }

    return 0;
}