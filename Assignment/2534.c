#include<stdio.h>
int main()
{
    int a,b,temp=0;
    while(scanf("%d %d", &a,&b)!=EOF)
    {
        int arr1[a],arr2[b];
        int i,j,p;
        for(i=0; i<a; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for(i=0;i<a; i++ )
        {
            for(j=i+1; j<a; j++)
            {
                if(arr1[i]<arr1[j])
                {
                    temp=arr1[i];
                    arr1[i]=arr1[j];
                    arr1[j]=temp;
                }
            }
        }
        for(i=0; i<b; i++)
        {
            scanf("%d", &arr2[i]);
        }
        int tmp=0;
        for(i=0; i<b; i++)
        {
            tmp=arr2[i];
            printf("%d\n", arr1[tmp-1]);
        }
        
    }

return 0;
}