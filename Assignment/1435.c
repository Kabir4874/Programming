#include<stdio.h>
int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        int arr[n][n];
        int i,j,a,b,l,tmp;
        tmp=n/2;
        if(n%2==1)
        {
            tmp++;
        }
        a=0;
        b=n-1;
        for (l = 1; l <= tmp; l++)
        {
            for (i = a; i <= b; i++)
            {
                for (j = a; j <= b; j++)
                {
                    arr[i][j] = l;
                }
            }
            a++;
            b--;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
              if(j==0)
              {
                printf("%3d", arr[i][j]);
              }
              else
              {
                printf("%4d", arr[i][j]);
              }
            }
            printf("\n");
        }
        printf("\n");
    }

return 0;
}