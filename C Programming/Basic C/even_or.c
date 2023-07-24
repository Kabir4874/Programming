#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter a number:");
    scanf("%d", &b);
    printf("Enter a number:");
    scanf("%d", &c);
    if (a == b)
    {
        printf("This 3 numbers are equal");
    }
    else if (b == c)
    {

        printf("This 3 number are equal");
    }
    else
    {
        printf("This 3 number are not equal");
    }

    return 0;
}