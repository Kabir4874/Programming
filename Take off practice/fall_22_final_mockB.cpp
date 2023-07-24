#include<bits/stdc++.h>
using namespace std;
int countDivisors(int n)
{
     int x=1;
    for(int i=2; i<=sqrt(n); i++)
    {
        int cnt=0;
        if (n%i==0)
        {
            while(n%i==0)n/=i,cnt++;
        }
        x*=(cnt+1);
    }

    if (n>1)x*=2;

    return x;
}
int main()
{
   int t;
   cin>>t;
   for(int i=1; i<=t; i++)
   {
    int k;
    cin>>k;
    long long int n,x;
     double l=0;
    for(int j=0; j<k; j++)
    {
        cin>>n;
        x=countDivisors(n);
         if(x>l)
        {
            l=x;
        }
    }
    cout<<"Case "<<i<<": "<<fixed<<setprecision(4)<<l<<endl;
   }
return 0;
}