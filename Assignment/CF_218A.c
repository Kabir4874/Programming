#include <stdio.h>
int main()
{
    char ch[1000];
    scanf("%s", &ch);
    if (ch[0] >= 'A' && ch[0] <= 'Z')
    {
        printf("%s\n", ch);
    }
    else
    {
        ch[0] = ch[0] - 32;
        printf("%s\n", ch);
    }

    return 0;
}