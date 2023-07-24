#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char ch[100];
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        gets(ch);
        int i, k;
        k = strlen(ch);
        for (i = k - 1; i >= 0; i--)
        {
            if (ch[i] >= 'a' && ch[i] <= 'z')
            {
                printf("%c", ch[i]);
            }
        }
        printf("\n");
    }
    return 0;
}