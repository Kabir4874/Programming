#include<stdio.h>
int main(){
   long long int n,i;
   scanf("%lld", &n);
   while(n)
   {
    i=n%10;
    n=n/10;
    printf("%lld", i);
   }
   printf("\n");
return 0;
}