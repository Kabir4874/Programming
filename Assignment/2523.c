#include <stdio.h>
int main()
{
    char ch[27];
    while (scanf("%s", &ch) != EOF)
    {
        int n;
        scanf("%d", &n);
        while (n--)
        {
            int t;
            scanf("%d", &t);
            int i;
            printf("%c", ch[t - 1]);
        }
        printf("\n");
    }

    return 0;
}