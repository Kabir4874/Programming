#include <stdio.h>
int main()
{
    char ch[1000];
    gets(ch);
    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
    }
    int j;
    for (j = 0; j < i; j++)
    {
        if (ch[j] >= 'a' && ch[j] <= 'z')
        {
            printf("%c", ch[j]);
        }
    }

    return 0;
}