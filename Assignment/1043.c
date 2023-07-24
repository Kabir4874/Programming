#include<stdio.h>
#include<math.h>
int main(){
   float a,b,c,parameter,area,s;
   scanf("%f%f%f", &a,&b,&c);
   if((a+b)>c && (b+c)>a && (a+c)>b)
   {
    parameter=a+b+c;
    printf("Perimetro = %.1f\n", parameter);
   }
   else
   {
     area = 0.5 * (a + b) * c;
    printf("Area = %.1f\n", area);
   }
return 0;
}