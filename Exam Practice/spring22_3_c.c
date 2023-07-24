#include <stdio.h>
int main()
{
    int n, arr[100], i = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        arr[i] = n % 2;
        n /= 2;
        i++;
    }
    int j;
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }

    return 0;
}