#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j;
    for (j = 0; j < 10; j += 2)
    {
        for (i = j; i < j + 1; i++)
        {
            int k = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = k;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}