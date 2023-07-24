#include <stdio.h>
#include <string.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;
typedef struct time
{
    int hour;
    int min;
    int sec;
} time;
void display(date d)
{
    printf("The date is: %d/%d/%d\n", d.date, d.month, d.year);
}
void displaytime(time t1)
{
    printf("The Time is: %d:%d:%d\n", t1.hour, t1.min, t1.sec);
}

int main()
{
    date d1 = {2, 2, 2022};
    time t1 = {5, 40, 50};
    display(d1);
    displaytime(t1);

    return 0;
}