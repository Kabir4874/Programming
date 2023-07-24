#include <stdio.h>
#include <string.h>
int main()
{
    char st1[50] = "How are you ";
    char *st2 = "Kabir";

    strcat(st1, st2);
    printf("Now the st1 is: %s", st1);
    return 0;
}