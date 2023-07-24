#include <stdio.h>
int main()
{
    char ch[30];
    char ch2[10];
    gets(ch);
    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
    }
    int j;
    printf("%c", ch[0]);
    for (j = 0; j < i; j++)
    {
        if (ch[j - 1] == ' ')
        {
            printf("%c", ch[j]);
        }
    }

    return 0;
}