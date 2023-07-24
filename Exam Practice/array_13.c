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
    int min = arr[0];
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}