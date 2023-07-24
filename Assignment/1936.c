#include<stdio.h>
int main()
{
    int n,x;
    int arr[]={1,2,6,24,120,720,5040,40320};
    scanf("%d",&n);
    x=0;
    int i;
    for(i=7; i>=0; i--)
    {
        x+=n/arr[i];
        n%=arr[i];
    }
    printf("%d\n", x);

return 0;
}