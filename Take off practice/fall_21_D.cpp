#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,x,y,z,c;
   cin>>n>>x>>y>>z>>c;
   int a= x+y;
   int b= a+z;
    int d= c;
    int e= c*c;
    int f= c*c*c;
    int k= n+1;
   if(x==d || x== e|| x==f)
   {
    cout<<"Eliminated on 1st hop"<<endl;
   }
   else if(a==d || a==e || a==f)
   {
        cout<<"Eliminated on 2nd hop"<<endl;
   }
   else if(b== d || b== e|| b== f || b<k)
   {
    cout<<"Eliminated on 3rd hop"<<endl;
   }
   else
   {
    cout<<"Safe"<<endl;
   }
return 0;
}