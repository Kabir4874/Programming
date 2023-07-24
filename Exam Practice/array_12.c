#include <stdio.h>
int main()
{
    int n, i, a;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    a = arr[0];
    for (i = 0; i < n; i++)
    {
        if (a > arr[i])
        {
            a = arr[i];
        }
    }
    printf("Minimum: %d\n", a);
    return 0;
}