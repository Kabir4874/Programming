#include<bits/stdc++.h>
using namespace std;
int main(){
   int d,x,a,t;
   float s;
   scanf("%d%d%d%d",&d,&x,&a,&t);
   s=0.5*a*(t*t);
   if(d<=(s+x))
   {
    printf("Allah bachaise!!!\n");
   }
   else
   {
    printf("Moira gesi!!!\n");
   }
return 0;
}