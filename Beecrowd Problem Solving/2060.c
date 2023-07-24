#include<stdio.h>
int main(){
   int n,i,a;
   int arr[4]={0,0,0,0};
   scanf("%d", &n);
   for(i=0; i<n; i++)
   {
    scanf("%d", &a);
      if(a%2==0)
        {
            arr[0]++;
        }
      if(a%3==0)
        {
            arr[1]++;
        }
      if(a%4==0)
        {
            arr[2]++;
        }
      if(a%5==0)
        {
            arr[3]++;
        }
   }
   printf("%d Multiplo(s) de 2\n",arr[0]);
   printf("%d Multiplo(s) de 3\n", arr[1]);
   printf("%d Multiplo(s) de 4\n", arr[2]);
   printf("%d Multiplo(s) de 5\n", arr[3]);
return 0;
}