#include<stdio.h>
int main()
{
    int t,i,j;
    scanf("%d", &t);
    while(t--)
    {
        int k;
        scanf("%d",&k);
        int arr[k];
        int tmp=0;
        for(i=0; i<k; i++)
        {
            scanf("%d", &arr[i]);
            tmp++;
        }
        int t=0;
        for(i=0; i<k; i++)
        {
            t=arr[i];
            for(j=i+1; j<k; j++)
            {
                if(t==arr[j])
                {
                   tmp--;
                    break;
                }
            }
        }
        printf("%d\n",tmp);
    }

return 0;
}