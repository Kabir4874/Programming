#include<stdio.h>
int main(){
   double N[12][12], sum;
   char c[2];
   int i,j,n=1;
   scanf("%c", &c);
   for(i=0; i<12; i++)
   {
    for(j=0; j<12; j++)
    {
        scanf("%lf", &N[i][j]);
    }
   }
   for(i=10; i>=0; i--)
   {
    for(j=0; j<n; j++)
    {
        sum+=N[i][j];
    }
    n++;
   }
   if(c[0]=='S')
   {
    printf("%.1lf\n", sum);
   }
   else if(c[0]=='M')
   {
    printf("%.1lf\n", sum/66.0);
   }
return 0;
}