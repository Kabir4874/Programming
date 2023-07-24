#include <stdio.h>
void replace(int *ptr, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[n - i - 1];
        ptr[n - i - 1] = temp;
    }
}
int main()
{
    int ptr[] = {1, 2, 3, 4, 5, 6, 7};
    replace(ptr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }
    return 0;
}