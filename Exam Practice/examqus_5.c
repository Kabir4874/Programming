#include <stdio.h>
int main()
{
    int arr[10];
    int i, sum = 0, count = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg = sum / 10;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > avg)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}