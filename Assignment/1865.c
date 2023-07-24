#include <stdio.h>
#include <string.h>
int main()
{
    char ch[10];
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%s %d", &ch, &n);
        if (!strcmp(ch, "Thor"))
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}