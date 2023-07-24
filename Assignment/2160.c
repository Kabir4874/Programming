#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1500];
    getchar();
    gets(ch);
    int n;
    n = strlen(ch);
    if (n <= 80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}