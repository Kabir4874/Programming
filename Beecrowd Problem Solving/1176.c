#include<stdio.h>
int main(){
   int i,j,a,k;
   long long int n[60];
   n[0]=0;
   n[1]=1;
   for(i=2; i<=60; i++)
   {
    n[i]=n[i-1]+n[i-2];
   }
   scanf("%d", &a);
   for(j=1; j<=a; j++)
   {
    scanf("%d", &k);
    printf("Fib(%d) = %lld\n", k, n[k]);
   }
return 0;
}