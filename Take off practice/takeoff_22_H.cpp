#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n ; i++)
   {
    cin>>arr[i];
   }
   int t;
   cin>>t;
   while(t--)
   {
    int k;
    cin>>k;
    for(int i=0; i<n-1; i++)
    {
            int x = arr[i]- arr[i+1];
            k+=x;
            if(k<0)
            {
                break;
            }
    }
    if(k>=0)
    {
        cout<<"Homecoming"<<endl;
    }
    else
    {
        cout<<"No way Home"<<endl;
    }
   }
return 0;
}