#include <stdio.h>
#include <string.h>
int main()
{
    char ch[101];
    while (1)
    {
        gets(ch);
        if (ch[0] == '0')
        {
            break;
        }
        int i, count = 0;
        for (i = 0; i <= strlen(ch); i++)
        {
            count++;
            if (ch[i + 1] == ' ')
            {
                printf("%d-", count);
                count = -1;
            }
            else if (ch[i + 1] == '\0')
            {
                printf("%d\n", count);
            }
        }
    }

    return 0;
}