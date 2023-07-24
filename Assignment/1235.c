#include <stdio.h>
#include <string.h>
int main()
{
    char ch[110];
    int t, length, tmp;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        gets(ch);
        length = strlen(ch);
        tmp = (length / 2) - 1;
        int i;
        for (i = tmp; i >= 0; i--)
        {
            printf("%c", ch[i]);
        }
        for (i = length - 1; i > tmp; i--)
        {
            printf("%c", ch[i]);
        }
        printf("\n");
    }

    return 0;
}