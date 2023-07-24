#include <stdio.h>
int main()
{
    int n;
    printf("Input array size: ");
    scanf("%d", &n);
    int i, arr[n];
    printf("Input elements in the array :\n");
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The Even elements are :\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    printf("The Odd elements are :\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}