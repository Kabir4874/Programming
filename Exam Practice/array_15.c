#include <stdio.h>
int main()
{
    int arr[4];
    int i, j, temp = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Second Max: %d\n", arr[1]);
    return 0;
}