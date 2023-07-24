#include<stdio.h>
int main(){
   int i,j=0,k=0,l,m,n,Im[5],P[5];
   for(i=0; i<15; i++)
   {
    scanf("%d", &n);
    if(n%2==0)
    {
        P[j]=n;
        j++;
        if(j==5)
        {
            for(l=0; l<5; l++)
            {
                printf("par[%d] = %d\n", l,P[l]);
               
                P[l]=0;
                j=0;
            }
        }
    }
    else{
        Im[k]=n;
        k++;
        if(k==5)
        {
            for(l=0; l<5; l++)
            {
                printf("impar[%d] = %d\n", l,Im[l]);
                
                Im[l]=0;
                k=0;
            }
        }
    }
   }
   for(i=0; i<5; i++)
   {
    if(Im[i]==0) break;
    
    printf("impar[%d] = %d\n", i,Im[i]);
   }
   for(i=0; i<5; i++)
   {
    if(P[i]==0) break;
    
    printf("par[%d] = %d\n", i,P[i]);
   }
return 0;
}