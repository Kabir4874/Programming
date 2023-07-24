#include <stdio.h>
int main()
{
    int arr[4];
    int i;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}