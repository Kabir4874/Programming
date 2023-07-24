#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,count=0;
   cin>>a>>b;
   for(int i=a; i<=b; i++)
   {
    if(i%3==0 || i%5==0)
    {
        count++;
    }
   }
   cout<<count<<endl;
return 0;
}