#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,x1,y1,count=0;
   cin>>a>>x1>>y1;
//    int o= a*2;
   int t;
   cin>>t;
   while(t--)
   {
    int k,x2,y2;
    cin>>k>>x2>>y2;
    double l= sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    double m = l+k;
    if(m<=a)
    {
        count++;
    }
   }
   cout<<count<<endl;
return 0;
}