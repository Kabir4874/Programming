#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c,cthNumber;
   cin>>a>>b>>c;
   for(int i=2; c>0; i++)
   {
        if(i%a==0 || i%b==0)
        {
            c--;
            cthNumber=i;
        }
   }
   int lcm;
   for(int i=1; i<=a*b; i++)
   {
    if(i%a==0 && i%b==0)
    {
        lcm=i;
        break;
    }
   }
   int step;
   if(cthNumber%a==0 && cthNumber%b==0)
   {
    step=lcm;
   }
   else if(cthNumber%a==0)
   {
    step=a;
   }
   else
   {
    step=b;
   }
   for(int i=cthNumber; i>=0; i=i-step)
   {
    cout<<i<<" ";
   }
  
return 0;
}