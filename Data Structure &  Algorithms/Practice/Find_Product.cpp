#include<bits/stdc++.h>
using namespace std;
int main(){
   int  n;
    int k=1;
    long long a[1000];
   cin>>n;
   for(int i=0; i<n; i++)
   {
    cin>>a[i];
    k=(k*a[i])%(1000000007);
   }
   cout<<k<<endl;
return 0;
}