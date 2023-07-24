#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Size of the array: %d\n", n);
    return 0;
}