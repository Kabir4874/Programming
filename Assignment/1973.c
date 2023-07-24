#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int arr[n];
    unsigned long long sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    int cnt=1, p=0, x=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            x=1; 
            break;
        }
        if(arr[i]==1)
        {
            p=i+1;
        }
        cnt++;
    }
    if(x)
    {
        printf("%d %lld\n", cnt,sum-(((cnt*2)-1)-p));
    }
    else
    {
        printf("%d %lld\n", cnt-1,sum-(((cnt)-1)-p)-1);
    }

return 0;
}