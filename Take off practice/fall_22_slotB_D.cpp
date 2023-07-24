#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   if(a>12)
   {
    if(b%2==0)
    {
        cout<<a-b<<endl;
    }
    else
    {
        cout<<a+b<<endl;
    }
   }
   else if(a<=12)
   {
    if(b%2==0)
    {
        cout<<a+b<<endl;
    }
    else
    {
        cout<<a-b<<endl;
    }
   }
return 0;
}