#include <stdio.h>
#include <string.h>
int main()
{
    char ch[10000];
    scanf("%s", &ch);
    int n = strlen(ch);
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (ch[i] == '1')
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        printf("%s0\n", ch);
    }
    else
    {
        printf("%s1\n", ch);
    }

    return 0;
}