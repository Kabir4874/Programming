#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter Array Elements:\n");
    int i, j;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Unique Elements:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                continue;
            }
            else
            {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }
    return 0;
}