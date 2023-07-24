#include <stdio.h>
void array(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is: %d\n", i + 1, *(ptr + i));
    }
}
int main()
{
    int arr[] = {
        1,
        2,
        5,
        3,
        6,
        5,
    };
    array(arr, 6);
    return 0;
}