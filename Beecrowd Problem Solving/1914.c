#include<stdio.h>
#include<string.h>
int main(){
   int a,b,i;
   long long int c,d,e,f;
   char aa[300], bb[20],cc[300],dd[20],ee[20]="PAR",ff[20]="IMPAR";
   scanf("%d", &a);
   for(i=0; i<a; i++)
   {
    scanf("%s%s%s%s", &aa, &bb, &cc, &dd);
    scanf("%lld %lld", &c, &d);
    e=c+d;
    if(bb[0]=='P')
    {
        if(e%2==0)
        {
            printf("%s\n",aa);
        }
        else
        {
            printf("%s\n", cc);
        }
    }
    else
    {
        if(e%2==0)
        {
            printf("%s\n", cc);
        }
        else
        {
            printf("%s\n", aa);
        }
    }
   }

return 0;
}