#include<stdio.h>
int main()
{
    int n,i,j,k,pos,max,max1;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        int arr[n];
        pos=max=max1=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        for(i=0; i<n; i++)
        {
            if(max1<arr[i]&& arr[i]!=max)
            {
                max1=arr[i];
                pos=i;
            }
        }
        printf("%d\n", pos+1);
    }

return 0;
}