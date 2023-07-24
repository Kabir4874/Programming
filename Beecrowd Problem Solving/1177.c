#include<stdio.h>
int main(){
   int x,y,z=0;
   scanf("%d", &x);
   for(y=0; y<1000; y++)
   {
    printf("N[%d] = %d\n", y,z);
    z++;
    if(x==z)
    {
        z=0;
    }
   }
return 0;
}