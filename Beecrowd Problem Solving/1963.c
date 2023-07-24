#include<stdio.h>
int main(){
   double a,b,c;
   scanf("%lf%lf", &a, &b);
   c=((b*100)/a)-100;
   printf("%.2lf%%\n", c);
return 0;
}