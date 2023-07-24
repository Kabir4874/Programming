#include <stdio.h>
int main()
{
    int arr[2010] = {0};
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        arr[n]++;
    }
    int i;
    for (i = 1; i <= 2000; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d aparece %d vez(es)\n", i, arr[i]);
        }
    }
    return 0;
}