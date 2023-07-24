#include<stdio.h>
int main(){
   int count=0, x,y;
   scanf("%d%d", &x,&y);
   if(x<0)
   {
    while(1)
    {
        if(x%y==0)
        {
            break;
        }
        x-=1;
        count++;
    }
    printf("%d %d\n", x/y,count);
   }
   else{

   printf("%d %d\n", x/y, x%y);
   }
return 0;
}