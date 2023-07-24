#include<stdio.h>
#include<stdbool.h>
int main()
{
    while(1)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)
        {
            break;
        }
        bool arr[b][a];
        int i,j;
        for(i=0; i<b; i++)
        {
            for(j=0; j<a; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        int count=0,count2;
        for(i=0; i<a; i++)
        {
            count=0;
            for(j=0; j<b; j++)
            {
                if(arr[j][i])
                {
                    count++;
                }
            }
            if(count==b)
            {
                printf("yes\n");
                break;
            }
        }
        if(count!=b)
        {
            printf("no\n");
        }
    }

return 0;
}