#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the side of a square:");
    scanf("%d", &side);
    printf("The Area of a square is:%f", pow(side, 2));

    return 0;
}