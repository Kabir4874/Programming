#include <stdio.h>
int main()
{
    int arr[4], i, sum = 0;
    printf("Enter Array Elements:\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 4; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    printf("Sum of Even Numbers = %d\n", sum);
    return 0;
}