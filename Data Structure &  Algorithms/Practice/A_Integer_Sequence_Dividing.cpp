#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,x;
   cin>>n;
   x=n%4;
   if(x==3 || x==0)
   {
    cout<<"0"<<endl;
   }
   else
   {
    cout<<"1"<<endl;
   }
return 0;
}