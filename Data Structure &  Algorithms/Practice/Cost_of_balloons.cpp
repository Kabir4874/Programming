#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,a,b,c;
   cin>>n;
   while(n--)
   {
   int sum1=0, sum2=0,result=0;
    cin>>a>>b>>c;
    int arr[c][2];
    for(int j=0; j<c; j++)
    {
        for(int q=0; q<2; q++)
        {
            cin>>arr[j][q];
        }
    }
    for(int j=0; j<c; j++)
    {
           sum1+=arr[j][0];
    }
        for(int j=0; j<c; j++)
    {
           sum2+=arr[j][1];
    }
    if(sum1>sum2)
    {
        if(a>b)
        {
            result = sum1*b+sum2*a;
        }
        else
        {
            result=sum1*a+sum2*b;
        }
    }
    else
    {
        if(a>b)
        {
            result=sum1*a+sum2*b;
        }
        else
        {
            result = sum1*b+sum2*a;
        }
    }
    cout<<result<<endl;

   }
return 0;
}