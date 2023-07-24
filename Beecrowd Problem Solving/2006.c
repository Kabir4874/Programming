#include<stdio.h>
int main(){
   int n,i,a,b=0;
   scanf("%d", &n);
   for(i=1; i<=5; i++)
   {
    scanf("%d", &a);
    if(n==a)
    {
        b++;
    }
   }
   printf("%d\n", b);
return 0;
}