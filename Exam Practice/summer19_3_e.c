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
    for (j = 0; j < 9; j++)
    {
        for (i = j; i < j + 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int k = arr[i + 1];
                arr[i] = k;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}