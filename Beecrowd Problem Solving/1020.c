#include <stdio.h>
int main()
{
    int year, month, day;
    scanf("%d", &day);
    year = day / 365;
    day = day - (year * 365);
    month = day / 30;
    day = day - (month * 30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
    return 0;
}
