#include<stdio.h>
int main()
{
     int n, x, k;
    while(scanf("%d",&n) && n)
    {
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&x);
            arr[i + 1] = x;
        }
        scanf("%d",&k);
        while(arr[k] != k)
            k = arr[k];
        
        printf("%d\n",k);
    }

return 0;
}