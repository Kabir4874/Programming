#include <stdio.h>
int main()
{
    int n, hours, min, sec;
    scanf("%d", &n);
    hours = (n / 3600);
    n= n%3600;
    min = (n / 60);
    n=n%60;
    sec = n;
    printf("%d:%d:%d\n", hours, min, sec);
    return 0;
}