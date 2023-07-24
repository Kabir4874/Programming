#include <stdio.h>
int main()
{
    int arr[7];
    printf("Enter Array Elements:\n");
    int i, j;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 7; i++)
    {
        for (j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Duplicate %d", arr[i]);
                break;
            }
        }
    }
    return 0;
}