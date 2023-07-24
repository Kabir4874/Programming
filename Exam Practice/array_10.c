#include <stdio.h>
int main()
{
    int arr[3];
    int i, sum = 0;
    printf("Enter Array Elements:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg = sum / 3.0;
    printf("Avg = %.1f\n", avg);
    return 0;
}