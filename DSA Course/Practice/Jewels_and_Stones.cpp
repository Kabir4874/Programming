#include<bits/stdc++.h>
using namespace std;
int main(){
   string s1,s2;
   int i,j,k=0,l=0,m,n;
   cin>>s1>>s2;
   if(s1.size()>s2.size())
   {
   for(i=0; i<s1.size(); i++)
   {
    if(s1[i]==s2[i])
    {
        k++;
    }
   }
   cout<<k;
   }
   else
   {
 for(i=0; i<s2.size(); i++)
   {
    if(s2[i]==s1[i])
    {
        l++;
    }
   }
   cout<<l;
   }
return 0;
}