#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
    ll x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    ll area_tri= (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    cout<<abs(2*area_tri)<<endl;
    
   }
return 0;
}