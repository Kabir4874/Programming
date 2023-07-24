#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;
    for (i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            printf("%d\n", arr[i]);
        }
        else
        {
            printf("%d,", arr[i]);
        }
    }
    return 0;
}