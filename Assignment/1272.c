#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char ch[52];
    scanf("%d", &t);
    int i, j, k;
    getchar();
    for (i = 0; i < t; i++)
    {
        gets(ch);
        k = strlen(ch);
        if (ch[0] >= 'a' && ch[0] <= 'z')
        {
            printf("%c", ch[0]);
        }
        for (j = 1; j < k; j++)
        {
            if (ch[j] >= 'a' && ch[j] <= 'z')
            {
                if (ch[j - 1] < 'a' || ch[j - 1] > 'z')
                {
                    printf("%c", ch[j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}