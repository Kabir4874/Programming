#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char ch[100];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", &ch);
        int k = strlen(ch);
        if (k > 10)
        {
            printf("%c%d%c\n", ch[0], k - 2, ch[k - 1]);
        }
        else
        {
            printf("%s\n", ch);
        }
    }

    return 0;
}