#include<stdio.h>
int main(){
   int n,a,b,c,d;
   float avg1,avg2,avg3;
   scanf("%d", &n);
   for(int i=0; i<n; i++)
   {
    scanf("%d%d%d", &a,&b,&c);
    avg1=(a+b)/2;
    avg2=(b+c)/2;
    avg3=(a+c)/2;
    if(avg1<35 || avg2<35 || avg3<35)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Pass\n");
    }
   }
return 0;
}