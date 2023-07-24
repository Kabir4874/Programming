#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char ch[100002];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", &ch);
        int n = strlen(ch);
        double k = n * 0.01;
        printf("%.2f\n", k);
    }

    return 0;
}