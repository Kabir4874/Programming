#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int a,b,c,d,x=1,y=1;
   scanf("%lld %lld", &a,&b);
   while(a--)
   {
        cin>>c;
        x*=c;
   }
   while(b--)
   {
        cin>>d;
        y*=d;
   }
   long long int k= x/y;
   int count=0;
   while(k!=0)
   {
    int digit =k%10;
    if(digit==0)
    {
        count++;
    }
    k=k/10;
   }
   cout<<count<<endl;

return 0;
}