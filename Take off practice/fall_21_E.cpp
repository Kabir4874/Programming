#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k=0,x;
   cin>>n;
   int arr[100007];
   for(int i=0; i<n; i++)
   {
    cin>>x;
    if(arr[x]==1)
    {
        arr[x]=0;
    }
    else
    {
        arr[x]=1;
    }
   }
   for(int i=1; i<=10000;i++)
   {
    k+=arr[i];
   }
   cout<<k<<endl;
   
return 0;
}