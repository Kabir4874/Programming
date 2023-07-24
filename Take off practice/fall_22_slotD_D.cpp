#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   if(a>c)
   {
    cout<<"GOAT CR10"<<endl;
   }
   else if(a==c)
   {
    if(b>d)
    {
         cout<<"GOAT CR10"<<endl;
    }
    else
    {
        cout<<"GOAT LM7"<<endl;
    }
   }
   else
   {
    cout<<"GOAT LM7"<<endl;
   }
return 0;
}