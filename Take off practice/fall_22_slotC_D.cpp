#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   if(x2==x1 && y2==y1)
   {
    cout<<"Equal"<<endl;
   }
   else if(x2>=x1 && y2<=y1)
   {
    cout<<"Inside"<<endl;
   }
   else
   {
    cout<<"Nothing"<<endl;
   }
return 0;
}