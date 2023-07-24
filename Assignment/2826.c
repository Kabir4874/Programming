#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[30], ch2[30];
    scanf("%s %s", &ch1, &ch2);
    if (strcmp(ch1, ch2) > 0)
    {
        printf("%s\n", ch2);
        printf("%s\n", ch1);
    }
    else if (strcmp(ch1, ch2) < 0)
    {
        printf("%s\n", ch1);
        printf("%s\n", ch2);
    }
    return 0;
}