#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d", &a,&b)!=EOF)
    {
        int n[b],i,j;
        for(i=0; i<b; i++)
        {
            scanf("%d", &n[i]);
        }
        if(a==b)
        {
            printf("*\n");
        }
        else
        {
            int c=0;
            for(i=1; i<=a; i++)
            {
                c=1;
                for(j=0; j<b; j++)
                {
                    if(n[j]==i)
                    {
                        c=0;
                        break;
                    }
                }
                if(c==1)
                {
                    printf("%d ", i);
                }
            }
            printf("\n");
        }
    }

return 0;
}