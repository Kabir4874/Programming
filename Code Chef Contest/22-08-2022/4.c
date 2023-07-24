#include<stdio.h>
int main(){
   int n,i,m,k,j;
   scanf("%d", &n);
   for(i=0; i<n; i++)
   {
    scanf("%d%d", &m,&k);
    j=m/k;
    if(j%2==0 && m%k==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
   }
return 0;
}