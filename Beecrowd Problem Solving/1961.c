#include<stdio.h>
int main(){
   int p,n,a,c,i;
   while(scanf("%d%d", &p, &n)!=EOF)
   {

   int ar[n];
   c=0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(i=0; i<n-1; i++)
    {
        a=ar[i+1]-ar[i];
    if(a<0)
    {
        a*=-1;
    }
    if(a>p)
    {
        c=5;
        break;
    }
    }
    if(c==5)
    {
        printf("GAME OVER\n");
    }
    else
    {
        printf("YOU WIN\n");
    }
   }
return 0;
}