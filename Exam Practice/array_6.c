#include <stdio.h>
int main()
{
    int i, n;
    int arr[7];
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Inputted values:\n");
    for (i = 6; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}