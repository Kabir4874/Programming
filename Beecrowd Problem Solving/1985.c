#include<stdio.h>
int main(){
   int n,i,j,k,l,m,a,b;
   float ar[6]={1.50,2.50,3.50,4.50,5.50},cal=0;
   scanf("%d", &n);
   for(i=0; i<n; i++)
   {
    scanf("%d%d", &a, &b );
   a=a%1000;
   cal+=b*ar[a-1];
   }
   printf("%.2f\n", cal);
return 0;
}