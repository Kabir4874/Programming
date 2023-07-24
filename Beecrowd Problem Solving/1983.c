#include<stdio.h>
int main(){
   
   int n,i,a,d;
   float b,c;
 scanf("%d", &n);
    c=0;
   for(i=0; i<n; i++)
   {
        scanf("%d %f", &a, &b);
        if(b>c)
        {
            c=b;
            d=a;
        }
   }
   if(c<8)
   {
    printf("Minimum note not reached\n");
   }
   else
   {
    printf("%d\n", d);
   }
return 0;
}