#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    if (a >= 40 && b < 30)
    {
        printf("Select as Allrounder\n");
    }
    else if (a >= 50)
    {
        printf("Select as Batsman\n");
    }
    else if (b < 25)
    {
        printf("Select as Bowler\n");
    }
    else
    {
        printf("Do not select\n");
    }
    return 0;
}