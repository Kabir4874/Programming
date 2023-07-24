#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int z;
        scanf("%d", &z);
        while (z--)
        {
            int n;
            scanf("%d", &n);
            switch (n)
            {
            case 1:
                printf("Rolien\n");
                break;
            case 2:
                printf("Naej\n");
                break;
            case 3:
                printf("Elehcim\n");
                break;
            case 4:
                printf("Odranoel\n");
                break;
            }
        }
    }
    return 0;
}