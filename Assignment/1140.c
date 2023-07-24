#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1500];
    while (1)
    {
        gets(ch);
        if (ch[0] == '*')
        {
            break;
        }
        else
        {

            int i, j, len, count = 1;
            len = strlen(ch);
            char tmp[2];
            if (ch[0] >= 'A' && ch[0] <= 'Z')
            {
                tmp[0] = ch[0] + 32;
            }
            else if (ch[0] >= 'a' && ch[0] <= 'z')
            {
                tmp[0] = ch[0] - 32;
            }
            for (i = 1; i < len; i++)
            {
                if (ch[i] == ' ')
                {
                    if (ch[i + 1] == ch[0] || ch[i + 1] == tmp[0])
                    {
                        continue;
                    }
                    else
                    {
                        count = 0;
                        break;
                    }
                }
            }
            if (count == 1)
            {
                printf("Y\n");
            }
            else
            {
                printf("N\n");
            }
        }
    }

    return 0;
}