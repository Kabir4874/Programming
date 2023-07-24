#include<stdio.h>
int main(){
   double a,b,r,pi=3.14,h,area;
   while(scanf("%lf%lf", &a, &b)!=EOF)
   {
        r=b/2;
        area=pi*r*r;
        h=a/area;
        printf("ALTURA = %.2lf\n", h);
        printf("AREA = %.2lf\n", area);
   }

return 0;
}