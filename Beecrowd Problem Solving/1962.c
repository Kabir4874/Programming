#include<stdio.h>
int main(){
   int a,n,i;
   scanf("%d", &a);
   for(i=0; i<a; i++)
   {
    scanf("%d", &n);
    if(n>2015)
    {
        printf("%d A.C.\n", n-2014);
    }
    else if(n<2015)
    {
        printf("%d D.C.\n", 2015-n);
    }
    else
    {
        printf("1 A.C.\n");
    }
   }
return 0;
}