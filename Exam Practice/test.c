#include <stdio.h>
int main()
{
    int num[5] = {10, 20, 30, 40, 50};
    int *p = num + 2;
    printf("%d\n", *p);
    printf("%d\n", *num);

    return 0;
}
