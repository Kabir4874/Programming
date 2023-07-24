#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   scanf("%d %d %d", &a,&b,&c);
   int x,y,z;
   x= a+b;
   y= b+c;
   z= a+c;
   if(x%2!=0 || y%2!=0 || z%2!=0)
   {
    printf("3 Kimonos for Nezuko\n");
   }
   else
   {
    printf("You have to choose two\n");
   }
return 0;
}