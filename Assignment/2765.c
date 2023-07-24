#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1000];
    gets(ch);
    int i;
    for (i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == ',')
        {
            printf("\n");
        }
        else
        {
            printf("%c", ch[i]);
        }
    }
    printf("\n");
    return 0;
}