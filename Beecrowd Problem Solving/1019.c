#include <stdio.h>
int main()
{
    int hour, minute, second;
    scanf("%d", &second);
    hour = second / 3600;
    second = second - (hour * 3600);
    minute = second / 60;
    second = second - (minute * 60);
    printf("%d:%d:%d\n", hour, minute, second);
    return 0;
}