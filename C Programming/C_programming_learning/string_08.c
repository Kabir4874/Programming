#include <stdio.h>
#include <string.h>
int main()
{
    char st1[50] = "How";
    char *st2 = "How";
    int val = strcmp(st1, st2);
    printf("Now the val is: %d", val);
    return 0;
}