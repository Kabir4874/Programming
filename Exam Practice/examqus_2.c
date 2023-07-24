#include <stdio.h>
int main()
{
    int balance, callrate, min, temp;
    scanf("%d%d%d", &balance, &callrate, &min);
    temp = callrate * min;
    if (balance >= temp)
    {
        printf("Call\n");
    }
    else
    {
        printf("Recharge\n");
    }

    return 0;
}