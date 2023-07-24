#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
        int n,k=0;
   cin>>t;
  for(int i=1 ; i<=t; i++)
   {
    int a,b;
    cin>>a>>b;
    while(a--)
    {
        cin>>n;
        k+=n%b;
    }
        cout<<"Case "<<i<<": "<<k<<endl;
        k=0;
   }
return 0;
}