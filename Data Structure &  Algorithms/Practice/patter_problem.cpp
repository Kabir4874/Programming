#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   int arr[n][n];
   for(int i=0; i<n; i++)
   {
    for(int j=0; j<n; j++)
    {
        arr[i][j]=m;
    }
   }
    for(int i=0; i<n; i++)
   {
    for(int j=0; j<n; j++)
    {
        cout<<arr[i][j];
    }
    cout<<endl;
   }
return 0;
}