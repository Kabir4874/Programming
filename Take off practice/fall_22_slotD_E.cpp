#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,count=0;
   cin>>a>>b;
   while(a--)
   {
    int n;
    cin>>n;
    if(n<b)
    {
        count+=n;
    }
    else
    {
        count+=b;
    }
   }
   cout<<count<<endl;
return 0;
}