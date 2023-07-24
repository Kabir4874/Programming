#include <stdio.h>
int ArraySum(int arr[])
{
    int sum = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    return sum;
}
float ArrayAverage(int sum)
{
    float average = sum / 5;
    return average;
}
int main()
{
    int arr[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int total = ArraySum(arr);
    float avg = ArrayAverage(total);
    printf("ArraySum = %d\n", total);
    printf("ArrayAverage = %f\n", avg);

    return 0;
}