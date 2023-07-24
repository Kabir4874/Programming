#include<stdio.h>
#include<string.h>
int main()
{
    int arr[10000],m,n,i,k,j;
    while(1)
    {
        scanf("%d %d", &m,&n);
        if(m==0 && n==0)
        {
            break;
        }
        memset(arr,0,sizeof(arr));
        int count=0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &k);
            arr[k]++;
            if(arr[k]==2)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

return 0;
}