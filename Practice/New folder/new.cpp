#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,j,a,b,c,d,e;
   cin>>a>>b;
   long long arr[a][b];
   for(i=0; i<a; i++)
   {
        for(j=0; j<b; j++)
        {
            cin>>arr[i][j];
        }
   }
   for(i=0; i<a; i++)
   {
        for(j=b-1; j>=0; j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
   }
return 0;
}