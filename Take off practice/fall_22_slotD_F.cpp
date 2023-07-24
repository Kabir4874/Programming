#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x1,y1,x2,y2,x3,y3,x4,y4;
   char c1,c2;
    double distance,a,b;
   cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
   cin>>c1>>c2;
   double ab= sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
   double bc= sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
   double cd= sqrt(((x3-x4)*(x3-x4))+((y3-y4)*(y3-y4)));
   double da= sqrt(((x1-x4)*(x1-x4))+((y1-y4)*(y1-y4)));    
   if(c1=='A' && c2=='B')
   {
    cout<<fixed<<setprecision(17)<<ab<<endl;
   }
   else if(c1=='A' && c2=='C')
   {
     a= da+cd;
     b= ab+bc;
    if(a<b)
    {
    cout<<fixed<<setprecision(10)<<a<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(10)<<b<<endl;
    }
   }
   else if(c1=='A' && c2=='D')
   {
    cout<<fixed<<setprecision(17)<<da<<endl;
   }
   else if(c1=='B' && c2=='C')
   {
    cout<<fixed<<setprecision(17)<<bc<<endl;
   }
   else if(c1=='B' && c2=='D')
   {
    a=ab+da;
    b= bc+cd;
    if(a<b)
    {
    cout<<fixed<<setprecision(10)<<a<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(10)<<b<<endl;
    }
   }
   else if(c1=='C' && c2=='D')
   {
    cout<<fixed<<setprecision(17)<<cd<<endl;
   }

return 0;
}