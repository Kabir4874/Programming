#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c,d;
   cin>>a>>b>>c;
   d= a+b;
   if(d>c)
   {
    cout<<"Greater"<<endl;
   }
   else if(d<c)
   {
    cout<<"Less"<<endl;
   }
   else if(d==c)
   {
    cout<<"Equal"<<endl;
   }
return 0;
}