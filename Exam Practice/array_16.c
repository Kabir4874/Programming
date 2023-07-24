#include <stdio.h>
int main()
{
    int arr[3];
    printf("Enter Array Elements:\n");
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number: ");
    int n;
    scanf("%d", &n);
    for (i = 0; i < 3; i++)
    {
        if (arr[i] == n)
        {
            printf("Found at index %d\n", i);
            break;
        }
    }

    return 0;
}