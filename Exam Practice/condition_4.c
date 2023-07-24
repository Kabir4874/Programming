#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n % 4 == 0 && n % 400 == 0)
    {
        printf("%d is divisible by both 4 & 400\n", n);
    }
    else
    {
        printf("%d is not divisible by both 4 & 400\n", n);
    }
    return 0;
}