#include <stdio.h>
int main()
{
    int n, i, a;
    int arr[4];
    printf("Enter Array Elements:\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for (i = 0; i < 4; i++)
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
    int dif = max - min;
    printf("Difference = %d\n", dif);

    return 0;
}