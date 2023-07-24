#include<stdio.h>
int main(){
   int n,i,j,k,m,l=0;
   while(scanf("%d", &n)!=EOF)
   {
    k=1;
    l++;
    for(i=1; i<=n; i++)
    {
        for(j=i; j>0; j--)
        {
            k++;
        }
    }
    if(n==0)
    {
        printf("Caso %d: %d numero\n", l,k); 
    }
    else
    {
        printf("Caso %d: %d numeros\n", l,k);
    }
    printf("0");
    for(i=1; i<=n; i++)
    {
        for(j=i; j>0; j--)
        {
            printf("% d", i);
        }
    }
    printf("\n\n");

   }
return 0;
}