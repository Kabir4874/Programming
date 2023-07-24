#include<bits/stdc++.h>
using namespace std;
int findGcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return findGcd(b,a%b);
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        int a,b;
        cin>>a>>b;
        int gcd= findGcd(a,b);
        int lcm= (a*b)/gcd;
       if(gcd==a && lcm==b)
       {
        cout<<a<<" "<<b<<endl;
       }
       else
       {
        cout<<"-1"<<endl;
       }
   }
return 0;
}